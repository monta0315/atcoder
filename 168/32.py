import sys
from itertools import permutations

input = sys.stdin.readline

def main():
    input = sys.stdin.readline

    n = int(input())
    a = []
    for _ in range(n):
        a_ = list(map(int,input().split()))
        a.append(a_)
    m = int(input())
    kenaku = [[False]*n]*n
    for _ in range(m):
        x,y = map(int,input().split())
        kenaku[x-1][y-1] = True
        kenaku[y-1][x-1] = True
    


    test = [i for i in range(n)]
    row = list(permutations(test))

    time = 10e20
    for r in row:
        t = 0
        for i in range(r-1):
            if kenaku[r[i]][r[i+1]]:
                t = 10e20
                break
            else:
                t += a[r[i]][i]
        
        t += a[r[i+1]][-1]

        time = min(time,t)
    
    if time == 10e20:
        print(-1)
    else:
        print(time)
        

        





if __name__ == '__main__':
   main()
