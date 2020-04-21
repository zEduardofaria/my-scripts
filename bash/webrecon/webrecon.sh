if [ "$1" == "" ] || [ "$2" == "" ]
then
        echo "WEB RECON"
        echo "Use mode: $0 SITE WORDLIST"
        echo "Example: $0 businesscorp.com.br list.txt"
else
for word in $(cat $2)
do
response=$(curl -s -H "User-Agent: W44zt00l" -o /dev/null -w "%{http_code}" http://$1/$word/)
if [ $response == "200" ]
then
echo "Directory found: $word"
fi
done
fi


