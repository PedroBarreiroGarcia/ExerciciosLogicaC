#include <stdio.h>
#include <conio.h>
int main(void)
{
  /*Criando a struct */
  struct nome_funcionario{
        char nome[20];
        char sobrenome[20];
    };
  
  struct endereco_funcionario{
        char rua[50];
        int numero;
        char complemento[15];
        int cep;
        char bairro[15];
        char cidade[25];
        char estado[25];
    };
  
  struct registro_funcionario 
  {
    struct nome_funcionario nome;
    char funcao[30];
    float salario;
    int dependentes;
    struct endereco_funcionario endereco;
  };
  
  /*Criando a variável funcionario que será do
  tipo struct registro_funcionario */
  struct registro_funcionario funcionario;
  
  printf("\n---------- Registro de Funcionário -----------\n\n\n");
  
  printf("Nome do funcionário: ");
  fflush(stdin);
  fgets(funcionario.nome.nome, 40, stdin);
  
  printf("Sobrenome do funcionário: ");
  fflush(stdin);
  fgets(funcionario.nome.sobrenome, 40, stdin);
  
  printf("Função: ");
  fflush(stdin);
  fgets(funcionario.funcao, 20, stdin);
  
  printf("Informe o salário do funcionário: ");
  scanf("%f", &funcionario.salario);
  
  printf("Informe o número de dependentes: ");
  scanf("%d", &funcionario.dependentes);
  
  printf("Informe nome da rua : ");
  fflush(stdin);
  fgets(funcionario.endereco.rua, 50, stdin);
  
  printf("Número: ");
  fflush(stdin);
  scanf("%d", &funcionario.endereco.numero);
 
  printf("Informe complemento do número : ");
  fflush(stdin);
  fgets(funcionario.endereco.complemento, 50, stdin);
  
  printf("Informe o CEP da rua : ");
  scanf("%d", &funcionario.endereco.cep);
  
  printf("Informe o bairro: ");
  fflush(stdin);
  fgets(funcionario.endereco.bairro, 50, stdin);
  
  printf("Informe a cidade: ");
  fflush(stdin);
  fgets(funcionario.endereco.cidade, 50, stdin);
  
  printf("Informe o estado: ");
  fflush(stdin);
  fgets(funcionario.endereco.estado, 50, stdin);
  
  printf("\n\n --------- Lendo os dado do funcionario ---------\n\n");
  printf("Nome do funcionário .................: %s",funcionario.nome.nome);
  printf("Sobrenome do funcionário ............: %s",funcionario.nome.sobrenome);
  printf("Função ..............................: %s",funcionario.funcao);
  printf("Informe o salário do funcionário ....: %.2f\n",funcionario.salario);
  printf("Informe o número de dependentes......: %d\n",funcionario.dependentes);
  printf("Informe nome da rua .................: %s",funcionario.endereco.rua);
  printf("Número ..............................: %d\n",funcionario.endereco.numero);
  printf("Informe complemento do número .......: %s",funcionario.endereco.complemento);
  printf("Informe o CEP da rua ................: %d\n",funcionario.endereco.cep );
  printf("Informe o bairro ....................: %s",funcionario.endereco.bairro);
  printf("Informe a cidade ....................: %s",funcionario.endereco.cidade);
  printf("Informe o estado ....................: %s",funcionario.endereco.estado);
 
  getch();
  return(0);
}