toys = ""
coun = 0

print("Digite a altura em m:")
height = float(input())
print("Digite a idade:")
age = int(input())

if height >= 1.50 and age >= 12:
    toys += "Barca Viking"
    coun += 1
if height >= 1.40 and age >= 14:
    toys += "\nElevator of Death"
    coun += 1
if height >= 1.70 or age >= 16:
    toys += "\nFinal Killer"
    coun += 1

print(f"Voce pode andar em {coun} brinquedos, sendo eles:")
print(toys)