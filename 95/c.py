import sys

input = sys.stdin.readline


def main():
    a, b, c, x, y = map(int, input().split())

    sum1 = 0
    sum2 = 0
    if x == y:
        sum1 = x * a + y * b
        sum2 = 2 * x * c
        print(min(sum1, sum2))
        return 0
    elif x > y:
        sum1 = y * b
        sum2 = y * 2 * c
        sum3 = sum1 + x * a
        sum4 = sum1 + x * 2 * c
        sum5 = sum2 + (x - y) * a
        sum6 = sum2 + (x - y) * 2 * c
        print(min(min(sum3, sum4), min(sum5, sum6)))
        return 0
    else:
        sum1 = x * a
        sum2 = x * 2 * c
        sum3 = sum1 + y * b
        sum4 = sum1 + y * 2 * c
        sum5 = sum2 + (y - x) * b
        sum6 = sum2 + (y - x) * 2 * c
        print(min(min(sum3, sum4), min(sum5, sum6)))
        return 0


if __name__ == "__main__":
    main()
