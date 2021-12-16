type_property = input().upper()
rental, tv, internet = [int(input()) for i in range(3)]
value = 0

if type_property == 'STANDARD':
    value += rental * 150
elif type_property == 'PREMIUM':
    value += rental * 200

value += tv * 10 + internet * 15

print(f'{value:.2f}')