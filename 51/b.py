import sys

input = sys.stdin.readline

def main():
    k,s = map(int,input().split())
    
    ans = 0
    for x in range(k+1):
        for y in range(k+1):
            if s < x+y:
                break
            if s - x - y <=k:
                ans+=1
    
    print(ans)

if __name__ == '__main__':
   main()
