def palindrome(num):
    if num == num[::-1]:
        return True
    else:
        return False


for i in range(int(input())):
    j = 0
    number = int(input())
    
    while not palindrome(str(number)):
        number += int(str(number)[::-1])
        j += 1

    print(j, number)
