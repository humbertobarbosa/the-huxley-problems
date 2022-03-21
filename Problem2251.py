size = int(input())
nums = [int(x) for x in input().split()]
disp = int(input())

for n in nums:
    print((n + disp) % 10, end=" ")