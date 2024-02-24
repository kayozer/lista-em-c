/*Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666*/

#include <stdio.h>
int main(){
  float numero, dobro, tercaparte;

  printf("Digite um número: \n");
scanf("%f", &numero);

  dobro = numero * 2;
  tercaparte = numero /3;

  printf("O numero escolhido foi: %2.f", numero);

  printf("O dobro é: %2.f", dobro);

  printf("A terça parte do número escolhido é %2.f",tercaparte);

  return 0;
}