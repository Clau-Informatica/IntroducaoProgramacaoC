/*  No dia da estreia do filme “Os Vingadores”, uma emissora de TV realizou uma pesquisa. Cada 
espectador respondeu a um questionário no qual constava sua idade e sua opinião em relação 
ao filme sendo: 1 - Regular, 2 - Bom, 3 - Excelente;
Criar um algoritmo que receba a idade a opinião de N espectadores, calcular e exibir:
• A quantidade de pessoas em cada opinião;
• A média da idade das pessoas em cada opinião;
• A porcentagem de resposta para cada opinião*/

#include <stdio.h>

int main()
{
    int qtdVotos;
    printf("Digite a quantidade de votos: "); scanf("%d", &qtdVotos);
    int idadeRegular = 0; int idadeBom = 0; int idadeExcelente = 0;
    int regular = 0; int bom = 0; int excelente = 0;
    
    int contador = 0;
    int idade;
    int voto;

    while (contador < qtdVotos)
    {
        printf("Digite sua idade: "); scanf("%d", &idade);
        printf("Vote: 1 - Regular, 2 - bom, 3 - excelente: "); scanf("%d", &voto);
        if (voto == 1)
        {
            regular += 1;
            idadeRegular = idadeRegular + idade;
        } else if (voto == 2)
        {
            bom += 1;
            idadeBom = idadeBom + idade;
        } else if (voto == 3)
        {
            excelente += 1;
            idadeExcelente = idadeExcelente + idade;
        } else {
            printf("Opção invalida! Digite novamente.\n");
            contador-=1;
        }
        contador+=1;
    }

    printf("Votos em (1 - Regular): %d\n", regular);
    printf("Media das idades (1 - Regular): %.2f\n", (float) idadeRegular/regular);
    printf("Porcentagem de votos (1 - Regular): %.2f%%\n\n", (float) regular*100/qtdVotos);

    printf("Votos em (2 - Bom): %d\n", bom);
    printf("Media das idades (2 - Bom): %.2f\n", (float) idadeBom / bom);
    printf("Porcentagem de votos (2 - Bom): %.2f%%\n\n", (float) bom*100/qtdVotos);

    printf("Votos em (3 - Excelente): %d\n", excelente);
    printf("Media das idades (3 - Excelente): %.2f\n", (float) idadeExcelente / excelente);
    printf("Porcentagem de votos (3 - Excelente): %.2f%%\n\n", (float) excelente*100/qtdVotos);
    
    
    return 0;
}
