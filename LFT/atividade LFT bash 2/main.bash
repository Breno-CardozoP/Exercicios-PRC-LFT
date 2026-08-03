dir=~/LFT/Ex1Script

if [ -d $dir ]
then 
echo "diretorio existente"
exit
else
echo "diretorio não existe, deseja criar-lo(pressione 'n' para encerrar)?"
read letra
test $letra = 'n' && exit

mkdir -p $dir

fi

