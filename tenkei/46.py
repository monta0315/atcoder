import collections
import sys

input = sys.stdin.readline

def main():
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    c = list(map(int,input().split()))

    step = [a,b,c]

    cnt_a = [0]*46
    cnt_b = [0]*46
    cnt_c = [0]*46
    cnt = [cnt_a,cnt_b,cnt_c]
    

    for i,v_ in enumerate(step):
        for v in v_:
            val = v % 46
            cnt[i][val]+=1

    ans = 0
    
    for i in range(46):
        for j in range(46):
            for k in range(46):
                if cnt[0][i] != 0 and cnt[1][j] != 0 and cnt[2][k] !=0 and (i+j+k) % 46 == 0:
                    ans += cnt[0][i]*cnt[1][j]*cnt[2][k]
    
    print(ans)
    

if __name__ == '__main__':
   main()
