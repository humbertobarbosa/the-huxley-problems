ideas, extravagance = map(int, input().split())
gestures = [int(x) for x in input().split()]
out = "NAO"

for g in gestures:
    for h in gestures:
        if g + h == extravagance and g != h:
            out = "SIM"
            break

print(out)