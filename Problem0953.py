def add_medal(t, m):
    global nations
    if m == 'ouro':
        nations[t][0] += 1
    elif m == 'prata':
        nations[t][1] += 1
    elif m == 'bronze':
        nations[t][2] += 1


nations = {}

while True:
    try:
        team, medal = map(str, input().split(','))
    except:
        break
    if team not in nations:
        nations[team] = [0, 0, 0]
    add_medal(team, medal)

position = 1    
for i in sorted(nations, key = nations.get, reverse = True):
    print(f'{position}){i}', end = ' ')
    print(f'ouro:{nations[i][0]} prata:{nations[i][1]} bronze:{nations[i][2]}')
    position += 1
