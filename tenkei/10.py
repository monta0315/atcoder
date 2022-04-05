from typing import List


def main():
    n:int = int(input())
    cp = [tuple(list(map(int,input().split()))) for _ in range(n)]
    q:int = int(input())
    lr = [tuple(list(map(int,input().split()))) for _ in range(q)]

    # 各クラスの出席番号若い順からのテストの点数の合計値を記録する
    c1_sum = [0]
    c2_sum = [0]
    for i in range(n):
        if cp[i][0] == 1:
            c1_sum.append(cp[i][1])
            c2_sum.append(0)
        elif cp[i][0] == 2:
            c2_sum.append(cp[i][1])
            c1_sum.append(0)
    

    for i in range(1,n+1):
        c1_sum[i] += c1_sum[i-1]

    for i in range(1,n+1):
        c2_sum[i] += c2_sum[i-1]

    for i in range(q):
        ans_1:int = c1_sum[lr[i][1]] - c1_sum[lr[i][0]-1]
        ans_2:int = c2_sum[lr[i][1]] - c2_sum[lr[i][0]-1]

        print(ans_1,ans_2)





if __name__ == '__main__':
   main()
