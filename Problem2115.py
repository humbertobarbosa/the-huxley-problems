num = float(input())

if num > 0:
    print(f"sinal({num :.4e}) = +1")
elif num < 0:
    print(f"sinal({num :.4e}) = -1")
else:
    print(f"sinal({num :.4e}) = 0")