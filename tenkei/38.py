import math
import sys
from decimal import Decimal

input = sys.stdin.readline

def main():
    a,b = map(int,input().split())
    gcd = Decimal(math.gcd(a,b))
    ans = a*b/gcd

    if ans > 10**18:
        print("Large")
    else:
        print(int(ans))

if __name__ == '__main__':
   main()
