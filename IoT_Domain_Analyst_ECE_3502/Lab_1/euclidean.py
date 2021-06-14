def euclidean(a, b) :
    summ = 0
    n = len(a)

    for i in range(n) :
        summ += (b[i]-a[i])**2
    
    summ = summ ** (1/2)

    return summ


a = [0, 3, 4, 5]
b = [7, 6, 3, -1]
print(euclidean(a, b))