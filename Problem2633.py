print("Cliente e estudante? (s ou n)")
student = input().lower()
print("Cliente e idoso? (s ou n)")
old_man = input().lower()

if student not in "sn" or old_man not in "sn":
    print("Entrada deve ser apenas pelas letras s ou n.")
elif "s" in student + old_man:
    print("Meia-entrada. Valor a ser pago: R$10,00.")
else:
    print("Entrada completa. Valor a ser pago: R$20,00.")