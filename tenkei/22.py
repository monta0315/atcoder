import math
from decimal import Decimal


def main():
    a,b,c = map(int,input().split())
    gcd = math.gcd(math.gcd(a,b),c)
    a = Decimal(a/gcd)
    b/= Decimal(gcd)
    c/= Decimal(gcd)
    print(a+b+c-3)

if __name__ == '__main__':
   main()

# 全ての辺の長さの最小公倍数を求める
# その最小公倍数で各辺を割り、-1したものを全て乗じたものを出力する
