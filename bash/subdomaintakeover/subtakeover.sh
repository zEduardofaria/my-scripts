for word in $(cat dnslist.txt)
do
host -t cname $word.$1 | grep "alias for"
done