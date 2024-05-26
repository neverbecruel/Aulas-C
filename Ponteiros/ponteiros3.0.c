
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------------- %d/%i => inteiros
//---------------------------------------------------------------- %p => endereço de memória
//---------------------------------------------------------------- %s => Strigs -cadeias de caracteres
//---------------------------------------------------------------- %f => números com ponto flutuantes -floats


//ALOCAÇÃO DINÂMICA E LIBERAÇÃO DE MEMÓRIA

/*A alocação dinâmica serve para alocar memoria em tempo de execução e não em tempo de compilação como o de
costume. Isso é util para criar estrutura de dados com tamanho flexível, como quando criamos um vetor que não
sabemos o tamanho final.

Funções de alocação dinâmica:
        1. malloc()
        2. calloc()
        3. realloc()
        4. free()
*/

//MALLOC

//A função malloc() serve para alocar dinamicamente um bloco de memória no heap durante a execução de um programa.

/*
    sintaxe:
        void* malloc(size_t size)
        "size_t size": Quantidade de bytes a ser alocada.
 */
int main(){

    int n;
    printf("Digite a quantidade de elementos do array: \n");
    scanf("%d", &n);

    // Aloca a memoria para um array de n elemtentos
    int *arr = (int*)malloc(n*sizeof(int));
    /*malloc(n * sizeof(int))

        -malloc é=> função que aloca um bloco de memória de tamanho especificado em bytes.
        -n * sizeof(int) => calcula a quantidade de memória necessária para armazenar n inteiros.
        -sizeof(int) => retorna o tamanho de um inteiro em bytes.

        Multiplicando n pelo resultado de sizeof(int), obtemos o número total de bytes necessários.
        malloc tenta alocar essa quantidade de memória e retorna um ponteiro void* para o início do bloco
     de memória alocado.
        Se a alocação falhar, malloc retorna NULL.


    Conversão para int *:

        -(int *) => é usado para converter (cast) o ponteiro genérico void* retornado por malloc em um
    ponteiro para int.
        Isso é necessário porque malloc não sabe para que tipo de dados a memória será usada; ele apenas
    retorna um ponteiro genérico.
*/



    return 0;
}