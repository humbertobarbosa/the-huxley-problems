arr_1 = {int(x) for x in input().split()}
arr_2 = {int(x) for x in input().split()}

print(*sorted(arr_1.difference(arr_2), reverse = True))