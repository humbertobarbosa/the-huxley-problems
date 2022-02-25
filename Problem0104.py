def can(string):
    global letters
    keys = {}
    aux_string = out_string = ""
    i = 0

    for s in string:
        if s not in aux_string:
            aux_string += s
            out_string += letters[i]
            keys[s] = letters[i]
            i += 1
        else:
            out_string += keys[s]
    
    print(out_string)

    
letters = "abcdefghijklmnopqrstuvwxyz"

for i in range(int(input())):
    can(input())