value = float(input())
money = 0

while True:
    try:
        course = input().split()[0]
        if course == "CC":
            money += 5
        elif course == "EC":
            money += 10
        else:
            money += 15

    except EOFError:
        break

print("Cebruthius!" if money >= value else "Escamou!")