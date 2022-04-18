from itertools import product


def main():
    n = int(input())
    ans = []

    for b in product((0, 1), repeat=n):
        if judge(b):
            ans.append(b)

    for a in ans:
        for i in range(len(a)):
            if a[i] == 0:
                print("(", end="")
            else:
                print(")", end="")

        print("")


def judge(bit):
    zero = 0
    one = 0
    for i in range(len(bit)):
        if bit[i] == 1:
            one += 1
        else:
            zero += 1

        if one > zero:
            return False
    
    if zero != one:
        return False
    
    return True


if __name__ == "__main__":
    main()


# 方針として => n桁の二進数を全通り作成し、左から1の数を数えていき、0の数を下回ることがなく、かつ0と1の数が等しければ正しい
