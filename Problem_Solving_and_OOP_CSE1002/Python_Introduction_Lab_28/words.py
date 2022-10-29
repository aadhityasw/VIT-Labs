ip = input()
words = ip.split()
for word in words:
    if len(word)<2:
        print('no')
        break
else:
    print('yes')
