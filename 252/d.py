import math
import sys

input = sys.stdin.readline

def combination_count_3(n):
    return math.factorial(n) // (math.factorial(n - 3) * math.factorial(3))

def main():
    n = int(input())
    check = set()
    store = [0]*2*10**5
    a = map(int,input().split())
    for v in a:
        if v not in check:
            check.add(v)
        else:
            store[v]+=1
    
    ans = combination_count_3(len(check))
    for v in store:
        if v != 0:
            ans*=(v+1)

    print(ans)



if __name__ == '__main__':
   main()
