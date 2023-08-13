/*  Um comerciante comprou um produto e deseja revendê-lo com um lucro de 45% 
se o valor de compra for menor do que R$ 20,00; caso contrário, o lucro será de 30%. 
Entrar com o valor de compra do produto e exibir seu valor de venda.
*/

#include <stdio.h>
int main()
{
    float valorCompra;
    printf("Digite o valor de compra do Produto: ");
    scanf("%f", &valorCompra);
    printf("Valor de Compra do Produto: R$ %.2f \n", valorCompra);
    if (valorCompra < 20)
    {
        double valorVenda = valorCompra + valorCompra * 0.45;
        printf("Valor de venda do Produto (+45%%): R$ %.2f", valorVenda);
    } else
    {
        double valorVenda = valorCompra + valorCompra * 0.30;
        printf("Valor de venda do Produto (+30%%): R$ %.2f", valorVenda);
    }
    return 0;
}
