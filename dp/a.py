import sys

input = sys.stdin.readline
INF = 10**10



def main():
    n = int(input())
    h = list(map(int,input().split()))


    dp = [INF]*n
    dp[0] = 0

    for i in range(1,n):
        if i == 1:
            dp[i] = dp[i-1]+abs(h[i-1]-h[i])
        else:
            dp[i] = min(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-2]-h[i]))
    
    print(dp[-1])

if __name__ == '__main__':
   main()
