#!/bin/bash
if ["$1" == ""]
then
        echo "PING SWEEP"
        echo "Use mode: $0 NETWORK"
        echo "Example: $0 192.168.0"
else
for host in {1..254};
do
ping -c 1 $1.$host | grep "64 bytes" | cut -d ":" -f 1 | cut -d " " -f 4;
done
fi