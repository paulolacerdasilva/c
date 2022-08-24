#include<stdio.h>

void msg(char nome[]);
int main(){
	char a[10];
	printf("Entre com o nome: ");
	scanf("%s",&a);
	msg(a);
	msg("Estela");
}
void msg(char nome[]){
	printf("\nOla, seja bem vindos!!! %s",nome);
}
