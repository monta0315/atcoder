import sys

input = sys.stdin.readline

n,m = map(int,input().split())
g = [[] for _ in range(n)]

def main():
    for _ in range(m):
        a,b = map(int,input().split())
        g[a-1].append(b-1)
        g[b-1].append(a-1)
    

    solve()
    

def solve():
    ans = 0
    for i in range(n):
        num = 0
        for j in range(len(g[i])):
            if i > g[i][j]:
                num+=1
        if num == 1:
            ans += 1

    print(ans)

if __name__ == '__main__':
   main()
