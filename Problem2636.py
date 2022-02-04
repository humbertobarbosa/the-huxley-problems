def choose_type(x):
    if x == int(x):
        x = int(x)
    
    return x


def reputation(x):
    if x <= 8:
        return "A"
    elif 9 <= x <= 12:
        return "B"
    elif 13 <= x <= 18:
        return "C"
    else:
        return "D"


print("Digite a quantidade de livros:")
books = int(input())
print("Digite a quantidade de alunos:")
students = int(input())

spb = students / books
print(f"Numero de alunos por livro: {choose_type(spb)}. Conceito {reputation(spb)} no MEC.")