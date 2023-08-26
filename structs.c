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

//Prototipo das funções
void criarLista(contato lista[], int tam);
void listarContatos(contato lista[], int tam);
void listarNomes(contato lista[], int tam);
void atualizarContato(contato lista[], int tam);


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
        fflush(stdin);
        printf("\nMENU:\n1. Listar Contatos\n2. Relatorio de Nomes \n");
        printf("3. Atualizar Contatos\n4. Sair \nEscolha uma opcao:");
        scanf("%d", &idMenu);

        switch (idMenu)
        {
        case 1:
            listarContatos(lista, tam); //chamando a função para listar os contatos
            break;
        case 2:
            listarNomes(lista, tam); //chamando a função para listar só os nomes
            break;
        case 3:
            atualizarContato(lista, tam); //chamando a função para atualizar contatos
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
void listarContatos(contato lista[], int tam){
    printf("\t\t SEUS CONTATOS \n");
    for (int i = 0; i < tam; i++)
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

//função para atualizar os dados do contato
void atualizarContato(contato lista[], int tam){
    int op;
    listarNomes(lista, tam);
    printf("Escolha o numero da opcao para alterar: "); scanf("%d", &op);
    for (int i = 0; i < tam; i++)
    {
        if (i == op-1)
        {
            printf("Atualizando contato: \n");
            fflush(stdin);
            printf("Nome: "); scanf("%50[^\n]s", &lista[i].nome);
            fflush(stdin);
            printf("Idade: "); scanf("%d", &lista[i].idade);
            fflush(stdin);
            printf("Telefone: "); scanf("%d", &lista[i].telefone);
            fflush(stdin);
            puts("Contato atualizado com sucesso!");
        }
    }  
}
