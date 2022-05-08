import sys

input = sys.stdin.readline

def main():
    n,y = map(int,input().split())

    for i in range(n+1):
        for j in range(n+1):

            sum = 10000*i+5000*j

            if sum > y:
                break

            if i+j+int((y-sum)/1000) == n:
                print(f'{i} {j} {int((y-sum)/1000)}')
                return 0
    
    print("-1 -1 -1")



if __name__ == '__main__':
   main()
