data = dict()

for i in range(4):
    field, value = input().split()
    data[field] = value

average = (float(data['ab1']) + float(data['ab2'])) / 2

print(f'{average:.2f}')
