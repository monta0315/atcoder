import sys

input = sys.stdin.readline

def main():
    n,q = map(int,input().split())
    a = list(map(int,input().split()))
    ts = []
    for _ in range(q):
        ts.append(list(map(int,input().split())))
    
    cnt = 0

    for t,x,y in ts:
        if t == 1:
            x_val = x - cnt
            y_val = y - cnt
            if x_val < 0:
                x_val += n
            if y_val < 0:
                y_val += n
            a[x_val - 1],a[y_val - 1] = a[y_val - 1],a[x_val - 1]
        elif t == 2:
            if cnt == n - 1:
                cnt = 0
            else:
                cnt += 1
        elif t == 3:
            num = x - cnt
            if num < 0:
                num += n
            print(a[num - 1])




    # どうせそのままやったら計算量オーバーするからt2の処理に関しては実行した回数を保存しておいて対応する
if __name__ == '__main__':
   main()
