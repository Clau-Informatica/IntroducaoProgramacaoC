/* Dados três vetores (Nota01, Nota02, Nota03) que contém as notas de 
50 alunos, construir um quartovetor (Media) que conterá as médias de cada
aluno e construir um quinto vetor (Situação) que contém a situação do aluno:
aprovado (maior ou igual a 7,0), 
de final (maior ou igual a 4,0 e menor que 7,0) ou
reprovado (menor que 4,0).*/

#include <stdio.h>
#include <string.h>

int main()
{
    float notas1[10] = {5, 3, 9, 6, 2, 9, 10, 7.5, 9, 3}; 
    float notas2[10] = {5, 3, 9, 6, 2, 9, 10, 7.5, 9, 3}; 
    float notas3[10] = {1, 3, 9, 6, 2, 9, 10, 7.5, 9, 3};
    float media[10];
    
    char situacao[10][10];

    for (int i = 0; i < 10; i++)
    {
        media[i] = (notas1[i] + notas2[i] + notas3[i]) / 3;
        
        if (media[i] >= 7)
        {
            strcpy(situacao[i], "aprovado");
        } else if(media[i] >= 4 && media[i] < 7) {
            strcpy(situacao[i], "final");
        } else {
            strcpy(situacao[i], "reprovado");
        }

    }

    for (int i = 0; i < 10; i++)
    {
        printf("| %.2f |", media[i]);
        printf("%s\n", situacao[i]);
    }
    

    return 0;
}
