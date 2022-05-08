import math
import sys
from decimal import Decimal

input = sys.stdin.readline

def main():
    t = int(input())
    l,x,y = map(int,input().split())
    q = int(input())
    e = list(int(input()) for _ in range(q))

    for ei in e:
        kakudo = ei*2*math.pi/t
        zahyo_y = math.sin(kakudo)*(-l/2)
        zahyo_z = math.cos(kakudo )*(-l/2)+l/2

        distance = math.pow((y-zahyo_y)**2+x**2,0.5)

        print(math.degrees(math.atan2(zahyo_z,distance)))

if __name__ == '__main__':
   main()
