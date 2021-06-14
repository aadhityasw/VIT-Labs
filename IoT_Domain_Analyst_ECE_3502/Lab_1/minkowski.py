def minkowski(a, b, p) :
    summ = 0
    n = len(a)

    for i in range(n) :
        summ += (b[i]-a[i])**p
    
    summ = summ ** (1/p)

    return summ


a = [0, 3, 4, 5]
b = [7, 6, 3, -1]
p=3
print(minkowski(a, b, p))
