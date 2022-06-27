import sys

input = sys.stdin.readline

def distance(x1,x2,y1,y2):
    d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)
    return d

def main():
    # 明かりを持ってるやつと持ってないやつで分割する
    # 明かりを持ってるやつの各明かりを持ってないやつとの距離を配列で保持する
    # 各あかりを持ってないやつについて最短の距離を抽出し、その中の最大値のルートを出力する

    n,k = map(int,input().split())
    a = set(map(int,input().split()))
    lights = []
    darks = []
    for i in range(n):
        x,y = map(int,input().split())
        if i+1 in a:
            lights.append([x,y])
        else:
            darks.append([x,y])
    
    store = []

    for l_v in lights:
        step = []
        for d_v in darks:
            d = distance(l_v[0],d_v[0],l_v[1],d_v[1])
            step.append(d)
        
        store.append(step)
            
    mins = []


    for i in range(len(darks)):
        mi = 1e20
        for j in range(len(lights)):
            mi = min(mi,store[j][i])
        mins.append(mi)


    print(pow(max(mins),0.5))

if __name__ == '__main__':
   main()
