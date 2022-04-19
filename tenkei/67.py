import sys

input = sys.stdin.readline


def main():
    n, k = map(int, input().split())

    if n == 0:
        print(0)
        exit()

    for _ in range(k):
        n = string8Convert5(to9(to10(n)))

    print(n)


def to10(eighth):
    num10 = 0
    for s in str(eighth):
        num10 *= 8
        num10 += int(s)
    return num10


def to9(num_10):
    str_n = ''
    while num_10:
        if num_10%9>=10:
            return -1
        str_n += str(num_10%9)
        num_10 //= 9
    return int(str_n[::-1])

def string8Convert5(nineth):
    nineth = str(nineth).translate(str.maketrans({'8':'5'}))
    return nineth


if __name__ == "__main__":
    main()
