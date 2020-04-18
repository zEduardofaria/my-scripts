import socket,sys

ip = raw_input("Digite o IP:")
porta = input("Digite a porta:")
    
mysocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
res = mysocket.connect_ex((ip,porta))

if (res == 0):
    print "Opened port"
else:
    print "Closed port"