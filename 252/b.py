import sys

input = sys.stdin.readline

def main():
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    b = set(map(int,input().split()))

    m = max(a)

    ans = False
    
    for i,v in enumerate(a):
        if v == m:
            if i+1 in b:
                ans = True
    
    if ans:
        print("Yes")
    else:
        print("No")



if __name__ == '__main__':
   main()
