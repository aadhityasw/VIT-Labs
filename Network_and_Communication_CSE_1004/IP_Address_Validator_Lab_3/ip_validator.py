st = input('Enter the IP Address : ')
flag = True
for i in range(len(st)) :
    if i<len(st)-2 and st[i]=='.' and st[i+1]=='0' and st[i+2]!='.':
        flag = False
        break
    if (ord(st[i])>=48 and ord(st[i])<=57) or st[i]=='.' :
        continue
    else :
        flag = False
        break
if st[-1]=='0' and st[-2] == '.' :
    flag = True
if st[0] == '0' and st[1]!='.' :
    flag=False
if st[-1]=='.' or flag==False :
    print('Invalid IP Address')
else :
    arr = list(map(int, st.split('.')))
    if len(arr)!=4 :
        print('Invalid IP Address')
    else :
        for i in range(4) :
            if arr[i]>255 or arr[i]<0 :
                flag = False
                break
        if flag == True :
            if arr[0]<128 :
                classs = 'A'
            elif arr[0]<192 :
                classs = 'B'
            elif arr[0]<224 :
                classs = 'C'
            elif arr[0]<239 :
                classs = 'D'
            else :
                classs = 'E'
            print('The class of the IP address is : ', classs)
        else :
            print('Invalid IP Address')
