#include <cstdio>
#include <cstring>
#include <map>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
#define MAX_IND 5000000
#define EARTH_RADIUS 6378.137//地球半径
#define PI 3.14159265 //圆周率
#define RAD(x) (0.017453292*(x)) // PI/180 角度转弧度
using namespace std;

struct  location
{
	/* data */
	double x; //维度
	double y; //经度
	int lo;
	location(double a,double b,int l){x = a; y=b;lo = l;}
};
struct Points
{
	short loc1;
	short loc2;
	Points(short a,short b){loc1 = a;loc2 = b;}
};

int ind[MAX_IND];
// map<int, struct location> loc;
vector<struct location> vec;
vector<struct Points> loc;

bool complare(struct location a,struct location b)
{
	return a.x < b.x;
}

bool surten(struct location a, struct location b){
	double dx = a.y - b.y; // 经度差值
	double dy = a.x - b.x; // 纬度差值
	double c = (a.x + b.x) * 0.008726646; // 平均纬度
	double Lx = RAD(dx) * 6367000.0 * (1-0.5*c*c); // 东西距离
	double Ly = 6367000.0 * RAD(dy); // 南北距离
	if(sqrt(Lx * Lx + Ly * Ly) > 10000) return true;
	// printf("%f\n",sqrt(Lx * Lx + Ly * Ly));
    return false;
}

int main(void)
{
	FILE *fp;
    int cnt = 1;
    char tmp1[20];
	char tmp2[80];
	int *p = ind;
    time_t start, end;
    double x, y;
    int lo;
	fp = fopen("train_set.txt", "r+");
	start = clock();
    while(fscanf(fp,"%s %s %lf %lf %d", tmp1, tmp2, &x, &y, &lo) != EOF)
	{
		if(*(p + lo) == 0){
            vec.push_back(location(x, y, lo));
            ind[lo] = 1;
        }
	}

	sort(vec.begin(),vec.end(),complare);

	int len = vec.size();
	// cnt = 0;
	vector<location>::iterator it1;
	vector<location>::iterator it2;
	for(it1 = vec.begin(); it1 != vec.end() ; ++it1)
	{
		double lat = (*it1).x;
		for(it2 = it1+1; it2 != vec.end() ; ++it2)
		{
			if((*it2).x >= (*it1).x+0.1) break;
			if(surten(*it1, *it2) == false)
			{
				loc.push_back(Points((*it1).lo,(*it2).lo));
				cnt+=1;
			}
			printf("%d\n", cnt);
		}
	}
     end = clock();
	printf("%f\n", double(end-start)/CLK_TCK);
	return 0;
}
