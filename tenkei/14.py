import sys

input = sys.stdin.readline

def main():
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))

    a.sort()
    b.sort()

    ans = 0
    for i in range(n):
        ans += abs(a[i]-b[i])
    
    print(ans)

if __name__ == '__main__':
   main()
