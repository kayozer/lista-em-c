/*Faça um algoritmo que leia a largura e altura de uma parede, calcule e
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta uma área de 2metros quadrados.*/

#include <stdio.h>
int main(){

  float largura, altura, area, litro;

  printf("digite a altura da parede: \n");
  scanf("%2.f",& altura);
  printf("digite a largura da parede: \n");
  scanf("%2.f", &largura);
   area = altura * largura;
  litro = area / 2;
  return 0;
}