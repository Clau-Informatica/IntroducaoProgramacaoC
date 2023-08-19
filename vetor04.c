/* Criar um algoritmo que leia os elementos de um vetor com 20 posições 
e escreva-o. Em seguida, troque o primeiro elemento pelo último, 
o segundo pelo penúltimo, o terceiro pelo antepenúltimo, e assim
sucessivamente. Mostre o vetor depois das trocas. */

#include <stdio.h>

int main()
{
    int vetor[20];

    for (int i = 0; i < 20; i++) //inserir os dados no vetor
    {
        printf("vetor[%d]: ", i); scanf("%d", &vetor[i]);
    }
    
    printf("\nVETOR ORIGINAL:\n"); //mostrar o vetor original
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vetor[i]);
    }

    int fim = 19, copia; //Logica para trocar os valores do vetor

    for (int i = 0; i < 10; i++)
    {
        copia = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    printf("\nVETOR APOS TROCA DE POSICOES:\n"); //mostrar o vetor com os valores trocados
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
