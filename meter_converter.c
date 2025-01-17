/*
Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/
#include <cs50.h>
#include <stdio.h>

void converter(int n);
int main (void){
    int n=get_int("Type a Number in Meters: ");
    converter(n);
    return 0;
}

void converter (int n){
    float dc=n*10;
    float cm=n*100;
    float mm=n*1000;
    printf("%i meters is equal to %.0f decineters\n",n,dc);
    printf("%i meters is equal to %.0f centimeters\n",n,cm);
    printf("%i meters is equal to %.0f milimeters\n",n,mm);
}



