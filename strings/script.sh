gcc 10.c -o machinecode
./machinecode > 11.c
rm machinecode
gcc 11.c -o 11.out
./11.out