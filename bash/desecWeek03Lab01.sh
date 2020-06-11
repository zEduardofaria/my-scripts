if [ "$1" == "" ]
then
echo "Informe o host. Exemplo: 172.16.1"
else
echo "Escaneando por host: $1"
for host in {53..56};
do
    for port in 13 37 30000 3000 1337;
    do
    nc $1.$host $port -w 1
    done
done
fi