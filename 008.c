/*Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 85.7m corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm
18572.0cm
185720.0mm*/

#include <stdio.h>
int main(){
float km, hm, dam, dm, cm,mm;

  printf("Digite a distancia em km: \n");
  scanf("%f",&km);

  hm = km / 10;
  dam = km / 100;
  dm = km / 1000;
  cm = km / 10000;
  mm = km / 100000;

  printf("O valor convertido em hectômetros é: %.2f\n", hm);
  printf("O valor convertido em decâmetros é: %.2f\n", dam);
  printf("O valor convertido em decímetros é: %.2f\n", dm);
  printf("O valor convertido em centímetros é: %.2f\n", cm);
  printf("O valor convertido em milímetros é: %.2f\n", mm);
    return 0; 
}