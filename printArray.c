#include <stdio.h>

// Função printArray(): imprime os n elementos de um array específico
void printArray(int array[], char msg[], int n){
    printf("\n %s = ", msg);
    for(int i = 0; i < n; i++){
        printf(" %d", array[i]);
    }
}

// Função copyArray(): copia os n elementos de um array para outro
void copyArray(int arrayOriginal[], int array[], int n){
    for(int i = 0; i < n; i++){
        array[i] = arrayOriginal[i];
    }
}