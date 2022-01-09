import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
port = 1121
s.bind(('', port))

s.listen(20)

cli, addr = s.accept()

data = cli.recv(1024)
data = data.decode()
print("Address Recieved")

a = data.split('.')
res = True
if len(a)!=4 :
	res = False

if res==True :
	for i in a :
		if len(i)==0 or (i[0] == '0' and len(i)>1) or (int(i)==0 and len(i)>0) :
			res = False
			break

	if res==True :
		arr = list(map(int, data.split('.')))
		for num in range(len(arr)):
			if arr[num]<0 or arr[num]>255:
				res = False
				break

if res==True :
	result = "Valid"
else :
	result = "Invalid"

result = result.encode()
cli.send(result)

print("Result sent")

cli.close()
