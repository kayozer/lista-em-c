/*Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10*/

#include <stdio.h>
int main(){
	int numero, antecessor, sucessor;
	
	printf("digite um numero inteiro: ");
	scanf("%d", &numero);

	antecessor = numero -1;
	sucessor = numero + 1;
	
	printf("o numero escolhido foi: %d\n",numero);

	printf("O antecessor de %d é %d\n", numero, antecessor);
	printf("O sucessor de %d é %d", numero, sucessor);
return 0;

}
