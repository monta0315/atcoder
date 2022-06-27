import sys
from itertools import permutations

input = sys.stdin.readline

def main():
    n,k = map(int,input().split())
    t = []
    for _ in range(n):
        t_ = list(map(int,input().split()))
        t.append(t_)
    
    row = permutations([i for i in range(1,n)])

    ans = 0

    for r in row:
        time = t[0][r[0]]
        for i in range(n-2):
            time += t[r[i]][r[i+1]]
        
        time += t[r[n-2]][0]

        if time == k:
            ans+=1
    
    print(ans)


if __name__ == '__main__':
   main()
