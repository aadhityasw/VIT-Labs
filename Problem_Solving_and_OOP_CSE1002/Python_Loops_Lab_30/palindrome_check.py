n=int(input())
l_str=[]
for i in range(n) :
     str1=input()
     l_str.append(str1)
for s in l_str :
     len_s=len(s)
     for j in range(len_s//2) :
          if s[j]!=s[len_s-1-j] :
               break
     else :
          print(s)
