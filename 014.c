/*A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.
*/

#include <stdio.h>
int main (){
  int precoCarro =90, dias;
  float precokm = 0.20, kmrodados, precoTotal;

  printf("Quantidade de dias com o carro: \n");
  scanf("%d", &dias);

  printf("Quantidade de km rodados: \n");
  scanf("%f",&kmrodados);

  int calculo1 = precoCarro * dias;
  float calculo2 = precokm * kmrodados;
  precoTotal= calculo1 + calculo2;

  printf("O preço total que você irá pagar é de: %.2f",precoTotal);

  return 0;
  
}