#include <stdio.h>
typedef struct
{
  char nome[50];     
  float altura;     
  int idade;     
  char sexo[1]; 
} DadosAlistamento;
int main()
{
    DadosAlistamento alistamento;
    printf("Digite o nome\n");
    scanf("%s",alistamento.nome);
    printf("Digite a altura\n");
    scanf("%f",&alistamento.altura);
    printf("Digite a idade\n");
    scanf("%d",&alistamento.idade);
    printf("Digite o sexo (M ou F)\n");
    scanf("%s",alistamento.sexo);
    printf("\nDados\n");
    printf("Nome: %s\n",alistamento.nome);
    printf("Altura: %.2f\n",alistamento.altura);
    printf("Idade: %d\n",alistamento.idade);
    printf("Sexo: %s\n",alistamento.sexo);
    return 0;
}