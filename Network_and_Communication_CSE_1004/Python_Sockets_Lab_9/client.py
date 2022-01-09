import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
port = 1121

s.connect(('127.0.0.1', port))

msg = input('Enter the IP address : ')
msg = msg.encode()

s.send(msg)
print("IP Address sent for Validation")

res = s.recv(1024)
res = res.decode()

print('Result : ', res)
