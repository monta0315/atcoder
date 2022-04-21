import sys

input = sys.stdin.readline

def main():
    n = int(input())
    g = [[] for _ in range(n)]
    a = list(map(int,input().split()))
    for i in range(n-1):
        g[a[i]-1].append(i)
    
    for i in range(n):
        print(len(g[i]))


if __name__ == '__main__':
   main()
