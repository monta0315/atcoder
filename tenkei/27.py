def main():
    n = int(input())
    s = list(input().split() for _ in range(n)) 

    d = set()

    for i,v in enumerate(s):
        if v[0] not in d:
            print(i + 1)
            d.add(v[0])

if __name__ == '__main__':
   main()
