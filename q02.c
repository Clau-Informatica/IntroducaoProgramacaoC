/*  prefeitura permitiu empréstimos a seus funcionários onde o valor máximo da prestação 
    não pode ultrapassar 30% do salário. Dados os valores do salário, o valor do empréstimo, 
    a quantidade de prestações do pagamento do empréstimo e a taxa de juros cobrada 
    no empréstimo; informa se o empréstimo é permitido ou não, se o empréstimo for permitido, 
    informar o valor da prestação e o valor total a pagar. */

#include <stdio.h>
int main()
{
    
    float salario; float valEmprestimo; int qtdParcelas; float taxaJuros;
    printf("Digite o valor do salario: "); scanf("%f", &salario);
    printf("Digite o valor do emprestimo: "); scanf("%f", &valEmprestimo);
    printf("Digite a quantidade de parcelas: "); scanf("%d", &qtdParcelas);
    printf("Digite a taxa de juros: "); scanf("%f", &taxaJuros);

    float totalEmprestimo = valEmprestimo + taxaJuros;

    if (totalEmprestimo / qtdParcelas > salario * 0.30)
    {
        printf("NAO PERMITIDO: valor da parcela maior do que 30%% do valor do salario\n");
        printf("Valor das Parcelas: R$ %.2f \n", totalEmprestimo / qtdParcelas);
        printf("30%% do Salario: R$ %.2f", salario*0.30);
    } else
    {
        printf("----------------------------------------------------\n");
        printf("EMPRESTIMO PERMITIDO!\n");
        printf("%d Parcelas no valor de R$ %.2f \n", qtdParcelas, totalEmprestimo / qtdParcelas);
        printf("Valor Total a Pagar do Emprestimo: R$ %.2f", totalEmprestimo);
    }
    
    
 
    return 0;
}
