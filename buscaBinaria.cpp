/**
 * Busca iterativamente o item dentro do vetor V. A cada itera��o
 * reduz o espa�o de busca pela metade sem fazer chamadas recursivas.
 * Ao encontrar o item retorna seu �ndice. Caso contr�rio retorna -1
 */
#include<stdio.h>
#define MAX 10
int busca_binaria(int v[MAX], int item)
{
    int inicio = 0;
    int fim = MAX - 1;

    while (inicio <= fim) {  /* Condi��o de parada */

        int i = (inicio + fim) / 2;  /* Calcula o meio do sub-vetor */

        if (v[i] == item) {  /* Item encontrado */
            return i;
        }

        if (v[i] < item) {  /* Item est� no sub-vetor � direita */
            inicio = i + 1;
        } else {  /* vector[i] > item. Item est� no sub-vetor � esquerda */
            fim = i;
        }
    }

    return -1;
}
int main ()
{
    int vetor[MAX] = {5, 23, 27, 30, 39, 45, 56, 71, 80, 92};

      int item = 27;

        /* Tests Iterative binary search */
        printf("Busca Binaria %d: \t%d\n", item,
               busca_binaria(vetor, item));
    return 0;
}
