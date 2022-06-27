import sys

input = sys.stdin.readline

def main():
    n = int(input())
    s = [input()[:-1] for i in range(n)]
    target = ['0','1','2','3','4','5','6','7','8','9']
    ans = 10**10
    for t in target:
        used_index_count = [0]*10
        max_sec = 0
        for r in s:
            for i,v in enumerate(r):
                if v == t:
                    max_sec = max(max_sec,i+used_index_count[i]*10)
                    used_index_count[i]+=1
                    break
        
        ans = min(max_sec,ans)


    print(ans)



if __name__ == '__main__':
   main()
