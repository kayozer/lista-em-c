/*Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
seu novo salário, com 15% de aumento.*/

#include <stdio.h>
int main (){
  float salario, novosalario;
  int porcentagem;

  printf("digite o seu salario:\n");
  scanf("%f", &salario);
  porcentagem = (salario * 15) /100;
  novosalario = salario + porcentagem;

  if (salario <=0)
  {
    printf("salário inválido");
  }
  else{ printf("o novo salario vai ser de: %f", novosalario);
}
}