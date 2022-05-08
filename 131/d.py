import sys

input = sys.stdin.readline

def main():
    n = int(input())
    ab = [tuple(list(map(int,input().split()))) for _ in range(n)]

    ab.sort(key = lambda x:x[1])
    sum_time = 0
    flag = True
    for _ in ab:
        time,deadline = _
        sum_time += time

        if sum_time > deadline:
            flag = False

    if flag:
        print("Yes")
    else:
        print("No")

if __name__ == '__main__':
   main()
