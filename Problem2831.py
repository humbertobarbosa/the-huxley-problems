queue = []

while True:
    line = input()
    
    if 'Enfileirar' in line:
        queue.append(line.split()[1])
    elif line == 'Desenfileirar':
        queue.pop(0)
    elif line == 'Imprimir':
        print(*queue)
    elif line == 'Finalizar':
        break