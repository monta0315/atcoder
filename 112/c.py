import sys

input = sys.stdin.readline

def main():
    n = int(input())
    ans_H = 0
    ans_X = 0
    ans_Y = 0
    for i in range(n):
        x,y,h = map(int,input().split())
        
    
    print(f'{ans_X} {ans_Y} {ans_H}')

if __name__ == '__main__':
   main()
