#Add two Matrices
m1=int(input('Enter m for first matrix:-\t'))
n1=int(input('Enter n for first matrix:-\t'))
m2=int(input('Enter m for second matrix:-\t'))
n2=int(input('Enter n for second matrix:-\t'))
if m1==m2 and n1==n2  :
    ma1=[]
    print('Enter the elements of the first matrix:')
    for i in range(m1) :
        ma1.append([])
        for j in range(n1) :
            a=int(input())
            ma1[i].append(a)
    print('The first matrix is :-')
    for i in range(m1) :
        for j in range(n1) :
            print(ma1[i][j],end=' ')
        print()
    ma2=[]
    print('Enter the elements of the second matrix:')
    for i in range(m2) :
        ma2.append([])
        for j in range(n2) :
            a=int(input())
            ma2[i].append(a)
    print('The second matrix is :-')
    for i in range(m2) :
        for j in range(n2) :
            print(ma2[i][j],end=' ')
        print()
    ma3=[]
    for i in range (m1) :
        ma3.append([])
        for j in range (n1) :
            ma3[i].append(ma1[i][j]+ma2[i][j])
    print('The sum of the matrices is :-')
    for i in range(m1) :
        for j in range(n1) :
            print(ma3[i][j],end=' ')
        print()
else :
    print('The order of the two matrices to be added should be same.\nInvalid Input.\nEnter correct Input.')
