def send_value(v, nx):
    global n
    n -= v
    return nx + 1


def output(v, nx):
    print(f'Notas de {v}: {nx}')


n = int(input())
n50 = n20 = n10 = n5 = n1 = 0

while n > 0:
    if n >= 50:
        n50 = send_value(50, n50)
    elif n >= 20:
        n20 = send_value(20, n20)
    elif n >= 10:
        n10 = send_value(10, n10)
    elif n >= 5:
        n5 = send_value(5, n5)
    elif n >= 1:
        n1 = send_value(1, n1)

output(50, n50)
output(20, n20)
output(10, n10)
output(5, n5)
output(1, n1)