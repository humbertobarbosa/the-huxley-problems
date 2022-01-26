def velkmh(v0, a, t):
    vel = v0 + a * t
    return vel * 3.6


velocidades = []

for i in range(3):
    velocidades.append(velkmh(float(input()), float(input()), float(input())))

print(min(velocidades))