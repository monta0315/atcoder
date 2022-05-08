import sys

input = sys.stdin.readline

s = input()


def solve():
    upcase = 0
    lowcase = 0
    diff = 1 if len(s) == len(set(s)) else 0

    for v in s:
        if v.isupper():
            upcase = 1
        elif v.islower():
            lowcase = 1
    
    if upcase == 1 and lowcase == 1 and diff == 1:
        return True
    else:
        return False


def main():    
    ans = solve()

    if ans:
        print("Yes")
    else:
        print("No")

if __name__ == '__main__':
   main()
