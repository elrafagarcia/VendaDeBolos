#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int vendedor(void);
int cliente(void);
int login(void);
int cadastro(void);
int menuLogin(void);

int main(void) {
  int opcao1;
  system("cls");
  printf("######################## \n");
  printf("     Menu Principal \n");
  printf("######################## \n\n\n");
  printf("1 - Menu Cliente\n2 - Menu Vendedor\n0 - Encerrar Programa \n\nEscolha uma opçao: ");
  scanf("%d", &opcao1);
  switch (opcao1) {
    while (opcao1 != 0) {
        system("cls");
        case 1:
          system("cls");
          cliente();
          break;
        case 2:
          system("cls");
          vendedor();
          break;
        default:
          system("cls");
          printf("voce deve escolher uma opção válida\n");
          main();
    case 0:
      system("cls");
      printf("Programa Encerrado");
      break;
    }
  }
}

int vendedor(void){
  int opcao2;
  system("cls");
  printf("######################## \n");
  printf("     Menu Vendedor \n");
  printf("######################## \n\n\n");
  printf("1 - Consultar Encomendas\n2 - Registro de Vendas\n3 - Inserir Produto\n4 - Alterar Produto\n5 - Excluir Produto\n0 - Voltar para o Menu Principal\n\n\nEscolha uma opção: ");
  scanf("%d", &opcao2);
  switch (opcao2) {
    while (opcao2 != 0) {
      case 1:
        system("cls");
        printf("Teste\n");
        break;
      case 2:
        system("cls");
        printf("Teste\n");
        break;
      case 3:
        system("cls");
        printf("Teste\n");
        break;
      case 4:
        system("cls");
        printf("Teste\n");
        break;
      case 5:
        system("cls");
        printf("Teste\n");
        break;
    case 0:
      main();
    }

  }
}

int cliente(void) {
  int opcao3;
  system("cls");
  printf("######################## \n");
  printf("     Menu Cliente \n");
  printf("######################## \n\n\n");
  printf("1 - Login\n2 - Cadastro\n0 - Voltar para o Menu Principal\n\nEscolha uma opção: ");
  scanf("%d", &opcao3);
  switch (opcao3) {
    while (opcao3 != 0) {
      case 1:
        login();
        break;
      case 2:
        cadastro();
        break;
    case 0:
      main();
      break;
    }
  }
}

int login(void) {
  int opcao4;
  system("cls");
  printf("######################## \n");
  printf("     Menu Usuário \n");
  printf("######################## \n\n\n");
  printf("1 - Ver Produtos\n2 - Fazer Pedido\n3 - Pedidos Realizados\n0 - Voltar para o menu anterior\n\n\nEscolha uma opção: ");
  scanf("%d", &opcao4);
  switch (opcao4) {
    while (opcao4 != 0) {
      case 1:
        printf("Teste");
        break;
      case 2:
        printf("Teste");
        break;
      case 3:
        printf("Teste");
        break;
    }
    case 0:
      cliente();
      break;
  }
}

int cadastro(void) {
  int opcao5, i;
  char nome[50] = "user";
  char nome1[50];
  char senha[16] = "user";
  char senha1[16];
  char usuario[16] = "user";
  char usuario1[16];
  system("cls");
  printf("######################## \n");
  printf("     Cadastro \n");
  printf("######################## \n\n\n");
  printf("Informe seu nome: ");
  scanf(" %s", &nome1);
  printf("Informe sua senha(Máx. 16 caracteres): ");
  fflush(stdin);
  for (i=0; i<17; i++) {
    senha1[i] = getch();
    putchar('*');
}
  printf("\n");
  senha1[i]='\0';
  scanf(" %s", &senha1);
  printf("Informe seu nome de usuário(Máx. 16 caracteres): ");
  scanf(" %s", &usuario1);
  system("cls");
  printf("Cadastro realizado com sucesso.\n\n");
  printf("O que deseja fazer agora?\n1 - Voltar para o menu anterior\n2 - Voltar para o Menu Principal\n0 - Encerrar Programa\n\n\nEscolha sua opção: ");
  scanf("%d", &opcao5);
  switch (opcao5) {
    while (opcao5 != 0) {
      case 1:
        system("cls");
        cliente();
        break;
      case 2:
        system("cls");
        main();
        break;
  }
    case 0:
      system("cls");
      printf("Programa Encerrado");
      break;
 }
}
