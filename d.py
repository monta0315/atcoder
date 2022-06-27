import sys
input = sys.stdin.readline
import math

def main():
    n = int(input())
    x0,y0 = map(int,input().split())
    x_2_n,y_2_n = map(int,input().split())

    l = math.sqrt((x0-x_2_n)**2 + (y0-y_2_n)**2)
    inner_angle = 180*(n-2)/n*2 
    pi = math.pi
    x1 = x_2_n - l*math.sin(inner_angle*pi/180)
    y1 = y0 + l*((90-inner_angle)*pi/180)
    print(f'{x1} {y1}')

if __name__ == '__main__':
   main()