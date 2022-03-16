c = ["Direita", "Meio", "Esquerda"]

for i, pls in enumerate([input().lower() for j in range(3)]):
    if pls[0] == "f" and pls[len(pls) - 1] == "r":
        print(c[i])
        value = True
    elif i == 2 and not 'value' in globals():
        print("Vou em frente")
