import heapq
import datetime
heap = []
heapq.heapify(heap)
class tree:
	"""docstring for tree"""
	def __init__(self):
		super(tree, self).__init__()
		self.t = {}

	def read(self):
		f = open('/home/nuonuo/下载/random.txt','r')
		lines = f.read()
		start = datetime.datetime.now()
		for i in range(10000):
			for line in lines.split('\n'):
				if not line:
					continue
				num = int(line)
				if len(heap) >= 10:
					top_item = -int(heap[0])
					if top_item >= -int(num):
						top_item = heapq.heappop(heap)
						heapq.heappush(heap,num)
				else:
					heapq.heappush(heap,num)
		end = datetime.datetime.now()
		print((end-start).microseconds/10000)

tr = tree()
tr.read()
print(sorted(heap))


		
