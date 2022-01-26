stack = []

while True:
    line = input()
    
    if 'Empilhar' in line:
        stack.insert(0, line.split()[1])
    elif line == 'Desempilhar':
        stack.pop(0)
    elif line == 'Imprimir':
        print(*stack)
    elif line == 'Finalizar':
        break