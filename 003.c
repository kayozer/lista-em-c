/*3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	char nome[255];
	float salario;
	
	printf("digite o seu nome completo: \n");
	gets(nome);
	printf("digite o seu salario:\n ");
	scanf("%f", &salario);
	
	printf("Nome do Funcionário: %s \nSalário: %.2f\n" ,nome, salario);
	
	printf("O funcionário %s tem um salário de R$ %.2f em Setembro.", nome, salario);
	
	return 0;
	
}

/*
A função gets() serve para ler uma string de entrada do usuário. Ela recebe como parâmetro um ponteiro para um buffer de memória, onde a string será armazenada. A função lê a entrada do usuário até encontrar um caractere de nova linha (\n).*/