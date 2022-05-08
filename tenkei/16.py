import sys

input = sys.stdin.readline

n = int(input())
abc = list(map(int,input().split()))
abc.sort()
a = abc[2]
b = abc[1]
c = abc[0]

def main():
    limit = 9999
    ans = 10**12
    for i in range(limit+1):
        for j in range(limit-i+1):
            remain = n-a*i-b*j
            if remain < 0:
                continue
            if remain%c == 0:
                ans = min(ans,i+j+int(remain/c))

    print(ans)

if __name__ == '__main__':
   main()
