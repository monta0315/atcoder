import sys

input = sys.stdin.readline
import math


def main():
    a,b,h,m = map(int,input().split())
    pi = math.pi
    m_angle = -pi*m/30 + pi/2
    m_x = b*math.cos(m_angle)
    m_y = b*math.sin(m_angle)

    h_angle = -pi*h/6 + pi/2 - (pi/6)*(m/60)
    h_x = a*math.cos(h_angle)
    h_y = a*math.sin(h_angle)


    ans = math.sqrt((m_x-h_x)**2 + (m_y-h_y)**2)

    print(ans)
    

if __name__ == '__main__':
   main()
