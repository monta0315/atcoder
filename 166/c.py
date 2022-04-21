import sys

input = sys.stdin.readline

n,m = map(int,input().split())
h = list(map(int,input().split()))
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
        good = True
        for j in range(len(g[i])):
            if h[i] <= h[g[i][j]]:
                good = False
                break
        
        if good:
            ans += 1

    print(ans)

if __name__ == '__main__':
   main()
