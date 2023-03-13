#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
#include "printArray.h"
#include "numOps.h"

int main() {
    printf("\tProjeto e Análise de Algoritmos\n");
    printf("\tListEx 02 - Calculando Tempo de Execução – Ordenação por Inserção e outros exemplos\n");
    printf("Entre com o tamanho (n) do Array\n");
    printf("> ");
    scanf("%d", &n);

    arrayOriginal = (int*) malloc(n * sizeof(int));
    array = (int*) malloc(n * sizeof(int));

    //Gerando número aleatórios para o Array Original
    geraArrayAleatorio(arrayOriginal, n);

    //Copia o Array Original
    copyArray(arrayOriginal, array, n);

    //Imprimindo o Array Original
    //printf("Array Original[%d]:", n);
    printArray(array, "Array Desordenado []", n);

    //Ordenado pelo Método de Insertion Sort
    insertionSort(arrayOriginal, n);
    //printf("\nArray Ordenado[%d]:", n);
    printArray(arrayOriginal, "Array Ordenado []", n);
    showOperations(numOperations);

    return 0;
}
