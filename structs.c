#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//definindo nossa estrutura principal
struct pessoa {
    char nome[50];
    int idade;
    int telefone;
};
// renomeando nossa estrutura para contato
typedef struct pessoa contato;

//função para criar a lista de contatos
void criarLista(contato lista[], int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("Insira os dados do contato(%d): \n", i+1);

        printf("Nome: "); scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        printf("Idade: "); scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Telefone: "); scanf("%d", &lista[i].telefone);
        fflush(stdin);
    }
    system("cls");
}

//função para listar os contatos
void listarContatos(contato lista[], int n){
    printf("Seus dados: \n");
    for (int i = 0; i < n; i++)
    {
        printf("-------------------- Contato %d --------------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tTelefone: %d\n", lista[i].telefone);
    }
}

//função para listar somente os nomes dos contatos
void listarNomes(contato lista[], int tam){
        printf("-------------------- Nomes --------------------\n");
    for (int i = 0; i < tam; i++)
    {
        printf("\t %d. %s\n", i+1, lista[i].nome);
    }
}

int main()
{    
    //tam define a quantidade de contatos
    int tam;
    printf("Digite a quantidade de contatos: "); scanf("%d", &tam);
    fflush(stdin);

    //criando nosso vetor do tipo contato (nome, telefone e idade)
    contato lista[tam];

    //chamando a função para criar a lista
    criarLista(lista, tam);

    // Menu com as opções 
    int idMenu;
    while (1)
    {
        printf("\nMENU:\n1. Listar Contatos\n2. Atualizar contatos\n");
        printf("3. Relatorio de Nomes\n4. Sair\nEscolha uma opcao:");
        scanf("%d", &idMenu);

        switch (idMenu)
        {
        case 1:
            listarContatos(lista, tam); //chamando a função para listar os contatos
            break;
        case 2:
            
            break;
        case 3:
            listarNomes(lista, tam); //chamando a função para listar só os nomes
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
