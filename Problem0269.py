meses = [
    "janeiro", "fevereiro", "marco", "abril",
    "maio", "junho", "julho", "agosto",
    "setembro", "outubro", "novembro", "dezembro"
]

mes = int(input())

if not 1 <= mes <= 12:
    print("invalido")
else:
    print(meses[mes - 1])