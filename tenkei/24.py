from xmlrpc.client import boolean


def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    sum = 0

    for i in range(n):
        sum += abs(b[i] - a[i])

    if sum > k:
        print("No")
    elif (k - sum) % 2 == 0:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
