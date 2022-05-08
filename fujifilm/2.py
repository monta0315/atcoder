import sys

input = sys.stdin.readline

N = int(input())
tmp = list(input().split())
n = int(input())

data = []

for i in range(n):
    l = int(input())
    step_1 = []
    for j in range(l):
        s = input()
        step_1.append(s.split())

    data.append(step_1)

def output(text,target,tmp_1):
    ans = [text if i == target else i for i in tmp_1]
    print(*ans)

def  get_target(tmp):
    return list(filter(lambda x: x[0] == "#",tmp))


def solve():
    for c_data in data:
        flag = True
        tmp_1 = tmp.copy()
        # 置換対象
        target = get_target(tmp_1)

        if len(target) == 0:
            print(*tmp_1)
        elif len(target) == 1:
            for a in c_data:
                if a[0] == target[0]:
                    output(a[1],target[0],tmp_1)
                    flag = False
                    break
            
            if flag:
                print("Error: Lack of data")
        else:
            for a in c_data:
                if a[0] in target:
                    tmp_1 = [a[1] if i == a[0] else i for i in tmp_1]
            
            if len(get_target(tmp_1)) == 0:
                print(*tmp_1)
                flag = False

            
            if flag:
                print("Error: Lack of data")




def main():
    solve()


if __name__ == '__main__':
   main()
