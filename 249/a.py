import sys

input = sys.stdin.readline

a,b,c,d,e,f,x = map(int,input().split())

def solve():
    takahashi = int(x/(a+c))*a*b
    aoki = int(x/(d+f))*d*e
    takahashi_amari = x%(a+c)
    aoki_amari = x%(d+f)

    if takahashi_amari >= a:
        takahashi += a*b
    else:
        takahashi += takahashi_amari*b
    
    if aoki_amari >= d:
        aoki += d*e
    else:
        aoki += aoki_amari*e 
    
    if takahashi > aoki:
        return 0
    elif takahashi < aoki:
        return 1
    else:
        return 2


    

def main():
    ans = 0

    ans = solve()

    if ans == 0:
        print("Takahashi")
    elif ans == 1:
        print("Aoki")
    else:
        print("Draw")

if __name__ == '__main__':
   main()
