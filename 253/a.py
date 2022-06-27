import copy
import sys

input = sys.stdin.readline

def main():
    a = list(map(int,input().split()))
    b = copy.copy(a)
    a.sort()
    if b[1] == a[1]:
        print("Yes")
    else:
        print("No")


if __name__ == '__main__':
   main()
