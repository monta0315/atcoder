import sys

input = sys.stdin.readline

def main():
    h,w = map(int,input().split())
    s = []
    for i in range(h):
        sub = input()[:-1]
        s.append(sub)
    
    f_x,f_y = 0,0
    f_find = False
    s_x,s_y = 0,0

    for i in range(h):
        for j in range(w):
            if s[i][j] == "o" and not f_find:
                f_find = True
                f_x = j
                f_y = i
            
            elif s[i][j] == "o" and  f_find:
                s_x = j
                s_y = i
    
    print(abs(f_x-s_x)+abs(f_y-s_y))



if __name__ == '__main__':
   main()
