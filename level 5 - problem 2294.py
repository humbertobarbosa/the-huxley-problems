word = input()
no_repeat = word[:1]

for i in range(len(word)):
    if i + 1 < len(word):
        if word[i + 1] != word[i]:
            no_repeat += word[i + 1]

print(no_repeat)