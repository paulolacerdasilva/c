#include <stdio.h>
void msg(char n[]);
int main(){
	char n[10];
	printf("Entre com o nome: ");
	scanf("%s", &n);
	msg(n);
	msg("Paulo");
}
void msg(char nome[]){
	printf("\n Seja Bem Vindo!!! %s", nome);
}
