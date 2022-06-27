import sys

input = sys.stdin.readline

def main():
    n,w = map(int,input().split())
    a = list(map(int,input().split()))

    ans = set()

    for i in range(n-2):
        for j in range(i+1,n-1):
            for k in range(j+1,n):
                if a[i]+a[j]+a[k] <= w:
                    ans.add(a[i]+a[j]+a[k])
    
    for i in range(n-1):
        for j in range(i+1,n):
            if a[i]+a[j] <= w:
                ans.add(a[i]+a[j])
    
    for i in range(n):
        if a[i] <= w:
            ans.add(a[i])

    print(len(ans))
    

if __name__ == '__main__':
   main()
