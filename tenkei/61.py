import sys

input = sys.stdin.readline

q = int(input())
tx = [tuple(list(map(int,input().split()))) for _ in range(q)]

def main():
   deck = list()
   for i in range(q):
      if tx[i][0] == 1:
         deck.insert(0,tx[i][1])
      elif tx[i][0] == 2:
         deck.append(tx[i][1])
      elif tx[i][0] == 3:
         print(deck[tx[i][1]-1])


if __name__ == '__main__':
   main()
