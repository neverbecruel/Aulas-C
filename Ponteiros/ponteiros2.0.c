
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

void incrementa(int *num){
    (*num)++;

}

int main() {

    int arr[5] = {0, 1, 2, 3, 4,};
    int size = sizeof(arr) / sizeof(arr[0]);
//sizeof(arr) / sizeof(arr[0]) => razão entre o tamanho de UM elemento e o tamanho da array -quantidade de elementos

    printArray(arr, size);

//  PONTEIROS E FUNÇÕES
//  Ponteiros podem ser passados como argumentos de funções permitindo que a função mude o valor da variavel original.
    int num = 10;
    printf("%d => aqui é o valor de num antes do incremento. -10\n", num);
    incrementa(&num);
    printf("%d => aqui o valor de num foi icrementado. -11\n", num);

//  AINDA TEMOS OS PONTEIROS NULOS.|
//  Um ponteiro nulo é um ponteiro que não aponta para lugar nenhum. Em C é representado pelo valor NULL
    int *ptr = NULL;
    if (ptr == NULL){
        printf("O ponteiro está nulo.\n");
//      caso tente usar um ponteiro nulo, encontrará um erro -segmentation fault- já que NULL é um endereço inválido
        printf("%d => valor de *ptr\n", *ptr); //--Process finished with exit code -1073741819 (0xC0000005)
    }
    return 0;

    /*
     *CONCLUSÃO
     * Ponteiros são uma ferramenta poderosa que permite o acesso e manipulação direta de endereço de memória. São
     * usados para:
     *  Trabalhar com arrays e strings,;
     *  Passar parâmetros para funções de forma eficiente;
     *  Entre outros...
     */


}


