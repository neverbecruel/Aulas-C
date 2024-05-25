
#include <stdio.h>

//---------------------------------------------------------------- %d/%i => inteiros
//---------------------------------------------------------------- %p => endereço de memória
//---------------------------------------------------------------- %s => Strigs -cadeias de caracteres
//---------------------------------------------------------------- %f => números com ponto flutuantes -floats



// ITERANDO SOBRE ARRAYS COM PONTEIROS


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", *(arr + i));// Explicação em -ponteiro1.0.c-
    }
    printf("\n");
}

int main() {

    int arr[5] = {0, 1, 2, 3, 4,};
    int size = sizeof(arr) / sizeof(arr[0]);
//sizeof(arr) / sizeof(arr[0]) => razão entre o tamanho de UM elemento e o tamanho da array -quantidade de elementos

    printArray(arr, size);


    return 0;
}


