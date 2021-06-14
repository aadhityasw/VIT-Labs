def manhattan(a, b) :
    summ = 0
    n = len(a)

    for i in range(n) :
        summ += abs(b[i]-a[i])

    return summ


a = [20, 10, 30]
b = [10, 10, 20]
print(manhattan(a, b))