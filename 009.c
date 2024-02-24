/*) Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
*/

#include <stdio.h>
int main(){
float real, dolar, resultado;

  printf("Digite o valor em real: \n");
  scanf("%f.2", real);

  dolar = 3.45;

  resultado = real * dolar;

  printf("O valor convertido ficou de R$ %2.f", resultado);

  return 0;
}