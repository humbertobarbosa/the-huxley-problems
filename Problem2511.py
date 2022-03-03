c = 0
items = [input() for i in range(5)]
guesses = [input() for i in range(7)]

for g in guesses:
    if g in items:
        c += 1

if c == 5:
    print("Could I be more happy?")
else:
    print("It is all just a moo point")