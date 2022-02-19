nums = [int(x) for x in input().split()]
nums[0], nums[2] = nums[0] * 60, nums[2] * 60
mins = (nums[2] + nums[3]) - (nums[0] + nums[1])

if mins <= 0:
    mins += 1440

print(f"O JOGO DUROU {mins // 60} HORA(S) E {mins % 60} MINUTO(S)")