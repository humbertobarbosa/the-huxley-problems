sum = 0
out = True

for i in range(6):
    print(f"Digite pontuacao da partida {i + 1}:")
    num = int(input())
    sum += num

    if num < 0:
        out = False

if out == False:
    print("Valores negativos nao sao permitidos.")
elif sum >= 100:
    print(f"Total de pontos: {sum}. O competidor esta classificado.")
else:
    print(f"Total de pontos: {sum}. O competidor esta desclassificado.")