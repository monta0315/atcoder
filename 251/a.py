import sys

input = sys.stdin.readline

def main():
    s = input()[:-1]
    print(s*int(6/len(s)))

    

if __name__ == '__main__':
   main()
