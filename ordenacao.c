#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "printArray.h"
#include "numOps.h"

/* Função geraArrayAleatorio() define números aleatórios de 0 a 100 para um array específico */
void geraArrayAleatorio(int arrayOriginal[], int n){
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        arrayOriginal[i] = rand() % 100 + 1;
    }
}

/* Função insertionSort(): ordena o array específico aplicando o método de ordenação por inserção
 * O algorítimo ordena o array de forma decrescente*/
void insertionSort(int arrayOriginal[], int n){
    int i, j, chave;
    numOperations = 0;

    for(j = 1; j < n; j++){
        numOperations++;
        chave = arrayOriginal[j];
        printf(" - %d", chave);
        i = j - 1;
        while((i >= 0) && (arrayOriginal[i] < chave)){
            numOperations++;
            arrayOriginal[(i + 1)] = arrayOriginal[i];
            i--;
        }
        arrayOriginal[(i + 1)] = chave;

        printArray(arrayOriginal, "Array Desordenado []", n);
    }
}