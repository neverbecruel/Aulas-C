#include <stdio.h>
//---------------------------------------------------------------- %d/%i => inteiros
//---------------------------------------------------------------- %p => endereço de memória
//---------------------------------------------------------------- %s => Strigs -cadeias de caracteres
//---------------------------------------------------------------- %f => números com ponto flutuantes -floats

// PONTEIROS

// Os ponteiros apontam para o endereço de memoria de uma variavel.
int main(){
    int num = 1;
    int *ptr = &num;
    // printando o ptr, temos o endereço de memoria que equivale a num
    printf("%p \n", ptr); // R: 000000bf3b3ff914 -exemplo

    // Printando o *ptr, temos o valor armazenado no endereco de memoria
    printf("%d \n", *ptr); // R: 1

    // Printando $ptr, temos o endereço de memoria do prório ponteiro
    printf("%p \n", &ptr); // R: 000000338d1ff760 -exemplo

    // Os ponteiros podem ser usados para alterar o valor da variavel inicial
    *ptr = 20; // num agora recebe o valor 20
    printf("%d \n", *ptr);

    //ou ainda...
   printf("%d \n", num);\


   // PONTEIROS E ARRAYS
   // O nome de um array é um ponteiro para o primeiro elemento do array. Isso significa que "lista" é equivalente a &lista[0].
   // De outro modo, podemos dizer que o nome de um array é um ponteiro que aponta para o endereço de memoria do
   //primeiro elemento da própria array

   int lista[10] = {1, 2 ,3, 4, 5, 6, 7, 8, 9};
   // Observe que o valor de &lista[0] e lista são iguais
   printf("%p \n", &lista[0]); // 000000e0b9dffc10
   printf("%p \n", lista);     // 000000e0b9dffc10

   // Também temos:
   int *ptrlista = lista;
   printf("%p \n", ptrlista); // 000000e0b9dffc10











    return 0;
};

