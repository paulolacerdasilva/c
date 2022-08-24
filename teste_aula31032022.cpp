#include<stdio.h>
#include<stdlib.h>
int main(){
	float nota1, nota2, nota3, media;
	printf("Entre com a nota1: ");
	scanf("%f",&nota1);
	printf("Entre com a nota2: ");
	scanf("%f",&nota2);
	printf("Entre com a nota3: ");
	scanf("%f",&nota3);
	
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/ 10;
	//printf("%f", media);
	if(media >=7){
		printf("\"Aprovado\" \t %.2f", media);
	}
	else if((media >=5) && (media < 7)){
		printf("\"Prova Final\" \t %.2f", media);
	}
	else{
		printf("\"Reprovado\" \t",media);
	}
	
}
