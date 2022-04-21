import copy
import sys

input = sys.stdin.readline

h, w = map(int, input().split())
s = [list(input()[:-1]) for _ in range(h)]


def main():
    tate = [[0] * w for _ in range(h)]
    yoko = [[0] * w for _ in range(h)]

    yoko = culc_yoko(yoko)
    tate = culc_tate(tate)

    ans = 0
    for i in range(h):
        for j in range(w):
            ans = max(yoko[i][j]+tate[i][j]-1,ans)

    print(ans)

def culc_yoko(yoko):
    for i in range(h):
        for j in range(w):
            step = copy.copy(s[i])
            yoko[i][j] = check_yoko(j, w, step)

    return yoko


def culc_tate(tate):
    s_t = [list(x) for x in zip(*s)]
    tate = [list(x) for x in zip(*tate)]
    for i in range(w):
        for j in range(h):
            step = copy.copy(s_t[i])
            tate[i][j] = check_yoko(j, h, step)

    return [list(x) for x in zip(*tate)]


def check_yoko(x, w, step):
    num = 0
    if x > w - 1:
        return 0
    if x < 0:
        return 0
    if step[x] == "#":
        return 0
    if step[x] == ":":
        return 0

    step[x] = ":"
    num += check_yoko(x + 1, w, step)
    num += check_yoko(x - 1, w, step)

    return 1 + num


if __name__ == "__main__":
    main()
