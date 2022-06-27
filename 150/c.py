import sys
from itertools import permutations

input = sys.stdin.readline

def check(r,p):
    flag = True
    for i in range(len(r)):
        if r[i] != p[i]:
            flag = False
            return flag
    
    return flag

def main():
    n = int(input())
    p = list(map(int,input().split()))
    q = list(map(int,input().split()))
    p_num = 0
    q_num = 0

    row = permutations([i for i in range(1,n+1)])

    for i,r in enumerate(row):
        if check(r,p):
            p_num = i
        if check(r,q):
            q_num = i
    
    print(abs(p_num-q_num))


if __name__ == '__main__':
   main()
