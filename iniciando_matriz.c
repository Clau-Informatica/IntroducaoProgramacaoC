#include <stdio.h>

int main()
{
    int matriz[3][3]; // inicializando nossa matriz

    // entrada de dados para a matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d] = ", i, j); scanf("%d", &matriz[i][j]);
        }
        
    }
    

    // mostrar os dados da matriz
    for (int i = 0; i < 3; i++) //linhas
    {
        for (int j = 0; j < 3; j++) //colunas
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
