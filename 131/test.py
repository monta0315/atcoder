nums = list(map(int,input()[1:][:-1].split(",")))
target = int(input())

print(nums)

for i in range(len(nums)-1):
    for j in range(i + 1,len(nums)):
        if nums[i]+nums[j] == target:
            print([i,j])
            break
