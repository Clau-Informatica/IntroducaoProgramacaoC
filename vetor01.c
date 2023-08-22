/* Dados 100 números armazenados em um vetor, exibir:
• o maior número.
• o menor número.
• o somatório de todos os números.
• a média aritmética de todos os números.
• o percentual de números pares.
• o percentual de números impares*/

#include <stdio.h>
int main()
{
   int v[5] = {55, 90, 35, 40, 15};
   int maior = v[0], menor = v[0], somatorio = 0;
   int par = 0, impar = 0;
   for (int i = 0; i < 5; i++)
   {
    printf("%d\n", v[i]);
    if (v[i] > maior)
    {
        maior = v[i];
    }
    if (v[i] < menor)
    {
        menor = v[i];
    }
    if (v[i] % 2 == 0)
    {
        par+=1;
    } else { 
        impar += 1; 
        }
    
    somatorio += v[i];
    
   }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Soma de todos os numeros: %d\n", somatorio);
    printf("Media de todos os numeros: %.2f\n", (float) somatorio/5);
    printf("Percentual de numeros pares: %.2f %%\n", (float) par*100/5);
    printf("Percentual de numeros impares: %.2f %%\n", (float) impar*100/5);
    return 0;
}
