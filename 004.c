/* Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.*/

#include <stdio.h>

int main(){
  int numero1, numero2, resultado;

  printf("digite o primeiro número:\n");
  scanf("%d", &numero1);

  printf("digite o segundo numero: \n");
  scanf("%d", &numero2);

  resultado = (numero1 + numero2);  
printf("o resultado da soma entre %d e %d é igual a %d\n", numero1,numero2,resultado);

  return 0;
}