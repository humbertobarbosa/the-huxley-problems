import math

b, c = [float(input()) for i in range(2)]
a = math.hypot(b, c)

print(f'{a:.2f}')