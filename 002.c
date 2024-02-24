/*2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!*/

#include <stdio.h>
int main(){
  char nome[256];
  
    printf("Qual o seu nome?");
    scanf("%s",nome);
    
    printf("Olá %s, é um prazer te conhecer!",nome);


  	return 0;
} 