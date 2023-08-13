/*  Chico tem 1,70m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m
e cresce 3 centímetros por ano. Construir um programa em C que calcule e imprima 
quantos anos serão necessários para que Juca seja maior que Chico 
(Utilize a estrutura While).*/

#include <stdio.h>
int main(){
    float chico = 1.70;
    float juca = 1.10;
    int anos = 0;
    while (juca < chico)
    {
        chico += 0.02;
        juca += 0.03;
        anos+=1;
        //printf("Chico: %.2f Juca: %.2f, anos passados: %d\n", chico, juca, anos);
    }

    printf("Serao necessarios %d anos para Juca ser maior que Chico", anos);
    
}