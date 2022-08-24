#include<stdio.h>
int soma();
int sub();
int mult();

int n1, n2, res;
int main(){
	soma();
	sub();
}

int soma(){
	printf("Função Soma.");
	printf("Entre com o valor: ");
	scanf("%d",&n1);
	printf("Entre com o valor: ");
	scanf("%d", &n2);
	res = n1 + n2;
	printf("A soma dos valores eh: %d", res);
	return 0;
}
int sub(){
	printf("Funcao Subtracao");
	printf("Entre com o valor: ");
	scanf("%d",&n1);
	printf("Entre com o valor: ");
	scanf("%d",&n2);
	res = n1 - n2;
	printf("O valor da subtracao eh: %d", res);
	return 0;
}
