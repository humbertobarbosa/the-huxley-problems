items = {1: 5.30, 2: 6, 3: 3.20, 4: 2.50}
code, quantity = (int(input()) for i in range(2))

value = quantity * items[code]

if quantity >= 15 or value >= 40:
    value *= 0.85

print(f'R$ {value:.2f}')
