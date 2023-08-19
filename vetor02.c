/* Dados 100 números armazenados em um vetor, exibir quantos números 
são maiores, quantos são menores e quantos são iguais 
a média aritmética de todos os números do vetor*/

#include <stdio.h>

int main()
{
    int vetor[10] = {10,5,10,10,2,10,7,5,10,10}; //vetor com 10 elementos 
    int maior = 0, menor = 0, igual = 0;
    float media = 0;

    for (int i = 0; i < 10; i++) //contador da posição 0 a 9
    {
        media += vetor[i];
    }

    media = media / 10; // obtendo a media aritmetica do somatorio de todos os valores do vetor
    printf("A media aritmetica dos numeros: %.2f\n", media);

    for (int i = 0; i < 10; i++) //repetição para comparar os valores
    {
        if (vetor[i] > media)
        {
            maior+=1;
        }
        if (vetor[i] < media)
        {
            menor+=1;
        } 
        if (vetor[i] == media)
        {
            igual+=1;
        }
    }
        printf("Quantidade de numeros maiores que a media: %d\n", maior);
        printf("Quantidade de numeros menores que a media: %d\n", menor);
        printf("Quantidade de numeros iguais a media: %d\n", igual);

    return 0;
}
