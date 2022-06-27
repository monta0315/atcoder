import sys

input = sys.stdin.readline

n = int(input())
a = []
for _ in range(n):
    a_ = list(map(int,input().split()))
    a.append(a_)
m = int(input())
xy = []
for _ in range(m):
    xy_ = list(map(int,input().split()))
    xy.append(xy_)

def main():
    

    # グラフで考える
    # xyで連結してる紐を切っていく

    g = []
    for i in range(n):
        step = []
        for j in range(n):
            if j != i:
                step.append(j)   
        g.append(step)

    for i,v_g in enumerate(g):
        for v_m in xy:
            if v_m[0] - 1 == i:
                v_g.remove(v_m[1] - 1)
                if len(v_g) == 0:
                    print(-1)
                    exit(0)
            if v_m[1] - 1 == i:
                v_g.remove(v_m[0] - 1)
                if len(v_g) == 0:
                    print(-1)
                    exit(0)


    test = []
    for i in range(n):
        visited = [False]*n
        step = []
        dfs(i,0,visited,g,step)
        test.append(step)
        

    print(test)

def dfs(now,depth,visited,g,step):
    if visited[now]: return -1
    if depth == n-1: return 0
    
    visited[now] = True

    for v in g[now]:
        if dfs(v,depth+1,visited,g,step)!= -1:
            step.append(now)
    
    return 0
    


if __name__ == '__main__':
   main()
