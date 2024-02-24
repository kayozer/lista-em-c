/*Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
segundo grau e mostre o valor de Delta.*/

#include <stdio.h>

int main(){

  float a, b, c;
  float delta;

  printf("Digite o coeficiente A: ");
  scanf("%f", &a);

   printf("Digite o coeficiente B: ");
  scanf("%f", &b);

   printf("Digite o coeficiente C: ");
  scanf("%f", &c);

  
  delta = b * b - 4 * a * c;

  if (delta > 0){
    printf("O Valor de delta é %f e esse valor é positivo",delta);
  } else if (delta == 0){
    printf("O valor de delta é de %f e é igual a zero", delta);}
  else {printf("O valor de delta é de %f e é negativo", delta);
         }

}
