for i in range(int(input())):
    word = input().lower().replace(" ", "")
    if word == word[::-1]:
        print("SIM")
    else:
        print("NAO")