import sys

input = sys.stdin.readline

import heapq
from sys import exit


class HeapDict:
    def __init__(self):
        self.h=[]
        self.d=dict()

    def insert(self,x):
        heapq.heappush(self.h,x)
        if x not in self.d:
            self.d[x]=1
        else:
            self.d[x]+=1

    def erase(self,x):
        if x not in self.d or self.d[x]==0:
            print(x,"is not in HeapDict")
            exit()
        else:
            self.d[x]-=1

        while len(self.h)!=0:
            if self.d[self.h[0]]==0:
                heapq.heappop(self.h)
            else:
                break
    def eraser(self,x,c):
        if x in self.d:
            for i in range(min(c,self.d[x])):
                self.d[x] -= 1

            while len(self.h)!=0:
                if self.d[self.h[0]]==0:
                    heapq.heappop(self.h)
                else:
                    break


    def is_exist(self,x):
        if x in self.d and self.d[x]!=0:
            return True
        else:
            return False

    def get_min(self):
        return self.h[0]
    
    def get_max(self):
        return self.h[-1]

def main():
    q = int(input())
    s = HeapDict()
    for i in range(q):
        qu = list(input().split())
        if qu[0] == '1':
            v = int(qu[1])
            s.insert(v)
        elif qu[0] == '2':
            v = int(qu[1])
            c = int(qu[2])
            s.eraser(v,c)
        elif qu[0] == '3':
            print(s.get_max() - s.get_min())



if __name__ == '__main__':
   main()
