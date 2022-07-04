import sys

input = sys.stdin.readline

def main():
    n,k = map(int,input().split())
    ab = []
    for _ in range(n):
        a,b = map(int,input().split())
        ab.append(b)
        ab.append(a-b)
    
    score = 0

    ab.sort(reverse=True)

    for i in range(k):
        score += ab[i]

    print(score)

# 部分点を全部とった方がいいわけではなさそう
# bでソートしたabとaでソートしたabを持っていてどっちを解くかを貪欲法で考える説 => k<n
# 上記のやり方だとbを全部取り切ったらコーナーケースになるからを取り切った場合abをa-bの値でsortしてk-n回上から取っていく
# tuple => (a,b,b_get)に変更して一番けつのbのb_getがTrueになったタイミングでcase2に変更する


if __name__ == '__main__':
   main()
