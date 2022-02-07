alphabet = "abcdefghijklmnopqrstuvwxyz"
sequence = ''.join(map(str, sorted([input() for i in range(5)])))

if sequence in alphabet:
    print("sim")
else:
    print("nao")