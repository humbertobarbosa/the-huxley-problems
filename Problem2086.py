while True:
    stop_continue = int(input())
    if stop_continue == -1:
        break
    numbers = [int(input()) for i in range(999)]
    numbers.append(stop_continue)
    n = int(input())
    k = numbers.count(n)
    print(f'{n} appeared {k} times')
