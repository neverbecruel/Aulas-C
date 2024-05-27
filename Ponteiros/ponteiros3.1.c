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
        2. free()
        3. calloc()
        4. realloc()

*/

//CALLOC

//A função calloc() serve para alocar memória dinamicamente para um ARRAY de elementos.


/*
    sintaxe:
        void* calloc(size_t num, size_t size);

            --"num": O número de elementos a ser alocado.
            --"size": O tamanho de cada elemento da array.
 */

int main(){
    int n;
    printf("Digite a quantidade de elementos da array:");
    scanf("%d", &n);

    int *arr = (int*)calloc(n,sizeof(int));
    /*calloc(n,  sizeof(int))

        -calloc => função que aloca um bloco de memória de tamanho suficiente para caber um vetor com n elementos.
        -n, sizeof(int) => parametros que passam a quantidade de elementos do vetor e qual o tamanho de cada
    elemento
        -sizeof(int) => retorna o tamanho de um inteiro em bytes.

        calloc() tenta alocar essa quantidade de memória e retorna um ponteiro void* para o início do bloco
     de memória alocado.
        Se a alocação falhar, calloc retorna NULL.

    Conversão para int*:
        -(int *) => quando usamos a função calloc, ela retorna, por padrão, um valor do tipo void. Usamos essa
    notação -(int*)- para mudar isso.

*/

    //Exemplo de uso
    if (arr == NULL){
        printf("Erro de alocação de memória.");
    }
    int i;
    int item;
    for (i = 0; i <n;i++){
        arr[i] = i+1;
    };
    printf("Elementos do vetor.\n");
    for (item=0; item < n; item++){
        printf("%d ", arr[item]);
    }
    free(arr);// Libera a memória alocada
    /* A função free() libera a memória que fora alocada com malloc(), calloc() ou realloc.
       Isso é importante para evitar vazamentos de memória que podem ocorrer caso a memória não seja
    alocada corretamente
     */
return 0;
}