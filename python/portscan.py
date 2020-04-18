
import socket,sys

for porta in range(1,65535):
    mysocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    if mysocket.connect_ex((sys.argv[1],porta)) == 0:
        print "Port",porta,"[OPEN]"
        mysocket.close()