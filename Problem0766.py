from statistics import mode

values = [int(x) for x in input().split()]

print(f"Moda = {mode(values)}")