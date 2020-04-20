for word in $(cat dnslist.txt)
do
host $word.$1 | grep -v "NXDOMAIN"
done