import socket,sys

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("whois.iana.org",43))
s.send(sys.argv[1]+"\r\n")

responseiana = s.recv(1024).split()
whoisiana = responseiana[19]
s.close()

s1 = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s1.connect((whoisiana,43))
s1.send(sys.argv[1]+"\r\n")
response = s1.recv(1024)

print response
