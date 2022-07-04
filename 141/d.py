import heapq
import sys

input = sys.stdin.readline

def main():
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    a = list(map(lambda x:x*(-1),a))
    heapq.heapify(a)

    for i in range(m):
       step = heapq.heappop(a)
       step = int(step/2)
       heapq.heappush(a,step)

    print(sum(a)*(-1))

if __name__ == '__main__':
   main()
