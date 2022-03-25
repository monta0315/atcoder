import pdb
from typing import List

import numpy as np


def main():
    h, w = map(int, input().split())
    a: list[list[int]] = [list(map(int, input().split())) for _ in range(h)]
    solve(a)


def solve(a: List[List[int]]) -> None:
    ans: List[List[int]] = [[0 for _ in range(len(a[0]))] for _ in range(len(a))]
    rows: List[int] = [sum(x) for x in a]
    columns: List[int] = [sum(x) for x in np.array(a).T.tolist()]

    for i, val in enumerate(a):
        for j, val2 in enumerate(val):
            ans[i][j] = rows[i] + columns[j] - val2

    for i in ans:
        print(*i)


if __name__ == "__main__":
    main()
