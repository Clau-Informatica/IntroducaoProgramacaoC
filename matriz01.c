#include <stdio.h>

int main()
{
    float matriz[5][5]; //iniciando a matriz
    float media = 0;
    int aprovado = 0, reprovado = 0, final = 0; //contadores


    //inserção de dados e a logica dos contadores
    for (int i = 0; i < 5; i++) // linha
    {
        for (int j = 0; j < 4; j++) //colunas
        {
            //condição para 1ª coluna (numero da matricula)
            if(j == 0){
                printf("Matricula = "); scanf("%f", &matriz[i][j]);
            } else // inserir as notas nas 3 colunas
            {
                printf("Nota[%d] = ", j); scanf("%f", &matriz[i][j]);
                media += matriz[i][j];
            }
        }
            media = media / 3;  //calcular media   
            matriz[i][4] = media; //inserindo o valor da media na ultima coluna
            if (media >= 7)
            {
                aprovado+=1;
            } else if (media >= 4 && media < 7)
            {
                final+=1;
            } else {
                reprovado+=1;
            }  
            media = 0;
    }

    //saida dos dados
    printf("\n|  Mat  | | N1 | | N2 | | N3 | | Media | \n\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("| %.2f |", matriz[i][j]);
        }
        printf("\n");     
    }

    printf("Quantidade de alunos aprovados: %d\n", aprovado);
    printf("Quantidade de alunos de prova final: %d\n", final);
    printf("Quantidade de alunos reprovados: %d\n", reprovado);

    return 0;
}
