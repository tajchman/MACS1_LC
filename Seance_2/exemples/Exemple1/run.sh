#! /bin/bash -x

for i in locale fichier globale
do
  gcc -Wall -Wextra -pedantic ./variable_$i.c -o ./variable_$i.exe
  
  ./variable_$i.exe
done
