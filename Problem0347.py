def triangular_number(n):
    n = n * (n + 1) // 2
    return n

def sum(n):
    sum = 0
    for i in range(n, 0, -1):
        sum += triangular_number(i)
    return sum


num = int(input())
print(triangular_number(num), sum(num), end=" ")

if triangular_number(num) % 2 == 0 and sum(num) % 2 == 0:
    print("P")
elif triangular_number(num) % 2 != 0 and sum(num) % 2 != 0:
    print("I")
else:
    print("N")