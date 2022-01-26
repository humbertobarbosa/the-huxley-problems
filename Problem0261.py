def create():
    size_z = int(input())
    z = set(int(x) for x in input().split())
    return size_z, z


def compare(a, b):
    out = 0
    for i in b:
        if i in a:
            out = 1
        else:
            out = 0
            break
    print(out)


size_a, a = create()
size_b, b = create()

compare(a, b)