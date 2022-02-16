def insert_answer(i):
    global score
    student_answer = input(f"Insira a resposta do aluno para a pergunta {i + 1}:\n")  
    if student_answer == test_answer[i]:
        score += 1


score = 0
test_answer = "ABCDEEDCBA"

for i in range(10):
    insert_answer(i)

print(f"Nota do aluno: {score}")