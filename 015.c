/*Crie um programa que leia o número de dias trabalhados em um mês e mostre o
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25
por hora trabalhada.*/

#include <stdio.h>
int main(){

  int valorhora = 25, diatrabalhado, valorrecebido;

  
  printf("Digite o valor de dias trabalhados:\n ");
  scanf("%d", &diatrabalhado);

  valorrecebido = valorhora * diatrabalhado;

  printf("Você trabalhou %d dias e recebeu R$ %d", valorhora, valorrecebido);

  return 0;
  
}