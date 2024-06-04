#include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------- %d/%i => inteiros
//---------------------------------------------------------------- %p => endereço de memória
//---------------------------------------------------------------- %s => Strigs -cadeias de caracteres
//---------------------------------------------------------------- %f => números com ponto flutuantes -floats
//---------------------------------------------------------------- %x => número em Hexadeximal

#define STACKSIZE 100

struct stack{
    int top;
    int itens[STACKSIZE];
};

int empty(struct stack *ps){
    if (ps->top == -1){
      return 1;
    }else{
        return 0;
    }
}

int pop(struct stack *ps) {
    if (!empty(ps)) {
        int valor = ps->itens[ps->top];
        ps->top--;
        return valor;
    } else {
        printf("A pilha está vazia...");
        return -1;
    }
}
int push(struct stack *ps, int num){
    if (ps->top < STACKSIZE - 1) {
        ps->top++;
        ps->itens[ps->top] = num;
        //printf("Item %d adicionado à pilha", num);
    }else{
        printf("A pilha está cheia...");}
    }








int main(){
    struct stack s;
    struct stack *ptrstack;
    ptrstack = &s;
    ptrstack->top = -1;

    printf("A pilha está vazia? %s\n", empty(ptrstack)?"Sim" : "Não");

    push(ptrstack, 10);
    push(ptrstack, 3);
    push (ptrstack,22);

    printf("A pilha está vazia? %s\n", empty(ptrstack)?"Sim" : "Não");

    for (int item = 0 ; item < (ptrstack->top); item++){
        printf("%d \n", s.itens[item]);
    }
    printf("\n");
    printf("O número %d foi retirado.", pop(ptrstack));


}
