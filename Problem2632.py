import math


def choose_type(x):
    if x == int(x):
        x = int(x)
    
    return x


b = float(input("Digite o valor do primeiro cateto:\n"))
c = float(input("Digite o valor do segundo cateto:\n"))

if b < 1 or c < 1:
    print("Valor de cateto invalido.")
else:
    a = math.hypot(b, c)
    aux_a = str(a).split(".")

    if len(aux_a[1]) > 5:
        a = round(a, 5)

    print(f"O triangulo cujos catetos sao {choose_type(b)} e {choose_type(c)} tem hipotenusa {choose_type(a)}.")