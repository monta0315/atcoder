import sys

input = sys.stdin.readline

def main():
    a,b = map(int,input().split())

    if a >= 3000:
        if b <= 700:
            print(a)
        else:
            print(a+b-700)
    else:
        if b <= 700:
            print(a+int(b/2))
        else:
            print(a+b-350)



if __name__ == '__main__':
   main()
