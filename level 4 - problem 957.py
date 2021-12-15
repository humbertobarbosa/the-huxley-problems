while True:
    text = input().upper()
    if 1 <= len(text) <= 20:
        for i in range(len(text)):
            print((i + 1) * text[i])
        break
    else:
        print('Entrada invalida')