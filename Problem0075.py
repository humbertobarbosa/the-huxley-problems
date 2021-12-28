flights = dict()

for i in range(37):
    num, qtt = map(int, input().split())
    flights[num] = qtt

while True:
    try:
        id, num = map(int, input().split())
    except:
        break
    if num in flights and flights[num] > 0:
        print(id)
        flights[num] -= 1
    else:
        print('INDISPONIVEL')
