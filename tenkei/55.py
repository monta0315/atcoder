from itertools import combinations

n, p, q = map(int, input().split())
a = list(map(int, input().split()))

ans = 0

t = combinations(a, 5)

for i in t:
    mul = 1
    if mul * i[0] % p * i[1] % p * i[2] % p * i[3] % p * i[4] % p == q:
        ans += 1

print(ans)
