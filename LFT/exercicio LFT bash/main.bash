#!/bin/bash
echo "digite o primeiro numero?"
read num1
echo "digite o segundo numero?"
read num2

if [ $num1 -eq $num2 ]
then
 echo "os numeros são iguais."
fi
 
if [ $num1 -gt $num2 ]
then
 echo "o maior numero é: "$num1 
else
 echo "o maior numero é: "$num2
 fi
 