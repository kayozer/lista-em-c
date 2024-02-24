/*Crie um programa que leia o preço de um produto, calcule e mostre o seu
PREÇO PROMOCIONAL, com 5% de desconto.*/

#include <stdio.h> 
int main(){
  float valor, novovalor;
  int promo;

  printf("Digite o valor do produto");
  scanf("%f", &valor);
  promo = (valor *5) / 100;
  novovalor = valor - promo;
  printf("Valor informado: %2.f", valor);
  printf("Valor com o desconto promocional: %2.f ", novovalor);
}