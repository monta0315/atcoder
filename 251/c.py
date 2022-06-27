import sys

input = sys.stdin.readline

def main():
    n = int(input())
    ans = 1
    top_score = 0
    group = set()
    for i in range(n):
        s,t = input().split()
        t = int(t)
        if s not in group:
            group.add(s)
            if top_score < t:
                top_score = t
                ans = i+1

    print(ans) 

if __name__ == '__main__':
   main()
