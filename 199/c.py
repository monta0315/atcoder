import sys

input = sys.stdin.readline

n = int(input())
s = list(input()[:-1])
q = int(input())
t_s = []
for _ in range(q): t_s.append(list(map(int,input().split())))

def custom(target):
    if target > n:
        target -= n
    else:
        target += n
    
    return target

def main():

    turn = False

    for t,a,b in t_s:
        if t == 1:
            if turn:
                a = custom(a)
                b = custom(b)
                s[a-1],s[b-1] = s[b-1],s[a-1]
            else:
                s[a-1],s[b-1] = s[b-1],s[a-1]
        else:
            turn = not turn

    if turn:
        s_front = s[:n]
        s_back = s[n:]
        print("".join(s_back+s_front))
    else:
        print("".join(s))

if __name__ == '__main__':
   main()
