import bisect
import sys

input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
q = int(input())
b = [int(input()) for _ in range(q)]


def main():
    a.sort()

    solve()


def solve():
    for i in b:
        index = bisect.bisect_left(a, i)
        if index == n:
            print(abs(a[index - 1] - i))
        else:
            print(min(abs(a[index] - i), abs(a[index - 1] - i)))


if __name__ == "__main__":
    main()
