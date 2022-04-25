import sys

input = sys.stdin.readline

def main():
    n = int(input())
    r = [tuple(list(map(int,input().split()))) for _ in range(n)]
    b = [tuple(list(map(int,input().split()))) for _ in range(n)]

    r.sort()
    b.sort()


    ans = 0
    for i in b:
        step = list(filter(lambda x: i[0] > x[0] and i[1] > x[1],r))
        step.sort(key = lambda x:x[1])
        if len(step)!= 0:
            r.remove(step[-1])
            ans += 1

    print(ans)

if __name__ == '__main__':
   main()
