total = int(input())

for i in range(3):
    total += int(input()) * float(input())

print(f'{total:.2f}\n{(total / 21):.2f}')