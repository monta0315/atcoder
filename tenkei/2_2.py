import sys

input = sys.stdin.readline

def main():
    h,w = map(int,input().split())
    a = [list(map(int,input().split())) for _ in range(h)]
    
    row_sum = [0 for _ in range(h)]
    col_sum = [0 for _ in range(w)]

    for i in range(h):
        sum = 0
        for j in range(w):
            sum += a[i][j]
        row_sum[i] = sum
    
    for i in range(w):
        sum = 0
        for j in range(h):
            sum += a[j][i]

        col_sum[i] = sum
    
    for i in range(h):
        for j in range(w):
            a[i][j] = row_sum[i] + col_sum[j] - a[i][j]

    for i in a:
        print(*i)

if __name__ == '__main__':
   main()
