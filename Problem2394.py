stack = []

while True:
    line = input()
    if 'Empilhar' in line:
        stack.insert(0, line.split()[1])
        print(*stack)
    elif line == 'Desempilhar':
        stack.pop(0)
        print(*stack)
    elif line == 'Fim':
        break