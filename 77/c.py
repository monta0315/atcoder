import bisect
import sys

input = sys.stdin.readline

n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = list(map(int,input().split()))
l = list()


def main():
    a.sort()
    b.sort()
    c.sort()

    solve()

def solve():
    ans = 0
    for i,v in enumerate(b):
        step = 1
        index_a = bisect.bisect_left(a,v)
        index_c = bisect.bisect_right(c,v)
        step *= index_a * (n - index_c)
        ans += step
    print(ans)

if __name__ == '__main__':
   main()
