import sys

input = sys.stdin.readline

def main():
    n = int(input())
    r = [tuple(list(map(int,input().split()))) for _ in range(n)]
    b = [tuple(list(map(int,input().split()))) for _ in range(n)]

    r.sort()
    b.sort()

    choiced = []
    ans = 0
    for i in range(n):
        candidate = (-1,-1)
        x1,y1 = b[i]
        y_max = -1
        for j in range(n):
            x2,y2 = r[j]
            if (x2,y2) in choiced:
                continue
            if is_ok((x2,y2),(x1,y1)):
                if y2 > y_max:
                    candidate = (x2,y2)
                    y_max = y2
            if 

    print(ans)

def is_ok(red,blue):
    x1,y1 = red
    x2,y2 = blue
    if x1 < x2 and y1 < y2:
        return True
    else:
        return False
 
if __name__ == '__main__':
   main()
