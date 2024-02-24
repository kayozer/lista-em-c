/*Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5
*/

#include <stdio.h>
int main(){

  float nota1, nota2, resultado;
  printf("digite a sua primeira nota: ");
  scanf("%f",&nota1);

  printf("digite sua segunda nota: ");
  scanf("%f",&nota2);

  resultado = ((nota1 + nota2)/2);
  printf("nota 1: %2.f", nota1);
  printf("nota 2: %2.f",nota2);
  printf("a sua média é de %2.f\n",resultado);
  

  return 0;
}