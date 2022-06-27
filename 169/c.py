import math
import sys
from decimal import Decimal

input = sys.stdin.readline

def main():
    a,b = input().split()
    a = Decimal(a)
    b = Decimal(b)
    ans = math.floor(a*b)
    print(ans)

if __name__ == '__main__':
   main()
