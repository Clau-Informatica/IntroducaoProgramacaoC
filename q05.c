/* Uma loja utiliza o código V para compras à vista e o código P para compras a prazo. 
Faça um algoritmo que receba o código e o valor de N transações. 
Inicialmente deverá receber os N valores através de uma estrutura de repetição. 
Em seguida mostrar um menu utilizando o Switch e repetição para o seguinte menu:
• O valor total das compras à vista; 
• O valor total das compras a prazo; 
• O valor total das compras efetuadas;
• Sair da aplicação.*/

#include <stdio.h>

int main() {
    int qtdCompras; int id;
    float valor, vista = 0, prazo = 0;

    printf("Digite o numero de compras: "); scanf("%d", &qtdCompras);

    for (int i = 1; i <= qtdCompras; i++) {
        printf("(1) - A vista ou (2) - A prazo: "); scanf("%d", &id);
        if (id == 1)
        {
            printf("Valor da compra a Vista: R$ "); scanf("%f", &valor);
            vista += valor;
        } else if (id == 2)
        {
            printf("Valor da compra a Prazo: R$ "); scanf("%f", &valor);
            prazo += valor;
        } else {
            printf("Opcao invalida, tente novamente!\n");
            i--;
        }
      
    }
    
    int idMenu;
    while (1)
    {
        printf("MENU:\n1. Total das compras a Vista\n2. Total das compras a Prazo\n");
        printf("3. Total de todas as Compras\n4. Sair\nEscolha uma opcao:");
        scanf("%d", &idMenu);

        switch (idMenu)
        {
        case 1:
            printf("Valor total das compras a vista: R$ %.2f\n", vista);
            break;
        case 2:
            printf("Valor total das compras a prazo: R$ %.2f\n", prazo);
            break;
        case 3:
            printf("Valor total de todas as compras: R$ %.2f\n", vista+prazo);
            break;
        case 4:
            printf("Programa encerrado.");
            return 0;
        default:
            printf("Escolha uma opcao valida!\n");
        }
    }
    return 0;
}