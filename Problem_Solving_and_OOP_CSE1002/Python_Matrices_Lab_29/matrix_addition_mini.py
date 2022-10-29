m1 = []

m2 = []

m3 = []

for r in range(0,10):

    ip = input().split()

    m1.append(ip)

for r in range(0,10):

    ip = input().split()

    m2.append(ip)

for r in range(0,10):

    m3.append([])

    for c in range(0,10):

        m3[r].append(int(m1[r][c])+int(m2[r][c]))

for r in range(0,10):

    for c in range(0,9):

        print(m3[r][c],end=' ')

    print(m3[r][9])
