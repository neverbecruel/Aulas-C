#include <stdio.h>


//------------------------------------------------------------- %d/%i => inteiros
//---------------------------------------------------------------- %p => endereço de memória
//---------------------------------------------------------------- %s => Strigs -cadeias de caracteres
//---------------------------------------------------------------- %f => números com ponto flutuantes -floats
//---------------------------------------------------------------- %x => número em Hexadeximal

#define STACKSIZE 100


//PILHAS LIFO

/*
    Pilhas LIFO são uma estrutura de dados na qual novos itens podem ser colocado ou retirados de uma --apenas uma--
 das suas extremidades. Essa extremidade chamamos de TOPO.
*/

struct pilha {
    int itens[STACKSIZE]; // Para criar a pilha LIFO, iniciamos um vetor que servirá de casa para a pilha.
    int top; // E aqui definimos seu topo.
};

// Para manipularmos a nossa pilha LIFO, precisaremos de algumas funções.

int isEmpty(struct pilha *ps) { // Com essa função, conferimos se a pilha LIFO está vazia.
    if (ps->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int push(int x, struct pilha *ps) { // Com essa função, inserimos um item na pilha LIFO.
    if (ps->top == STACKSIZE - 1) { // Antes de inserir um novo item, precisamos nos certificar de que há espaço.
        printf("A pilha está cheia.\n");
        return -1;
    } else {
        ps->itens[++ps->top] = x; // Caso haja espaço, inserimos o item na pilha LIFO.
        printf("O número %d foi adicionado com sucesso.\n", ps->itens[ps->top]);
        return 0;
    }
}

int pop(struct pilha *ps) { // Com essa função, excluimos o ULTIMO elemento da pilha LIFO
    if (!isEmpty(ps)) { // Checamos se a pilha está vazia.
        return ps->itens[ps->top--]; // Se não, retornamos o valor do ultimo elemento e decrementamos o valor do topo.
    } else {
        printf("A pilha está vazia.\n");
        return -1;
    }
}

int showLast(struct pilha *ps) { // Com essa função, retornamos o ultimo elemento da pilha.
    if (!isEmpty(ps)) {
        return ps->itens[ps->top]; // Retornamos o valor no vetor cujo índice corresponde a ps->last
    } else {
        printf("A pilha está vazia.\n");
        return -1;
    }
}


int main() {
    struct pilha ps; // Declaramos uma pilha LIFO
    ps.top = -1; // Definimos -1 como valor inicial para ps.last

    pop(&ps); // RETORNO: A pilha está vazia.
    push(22, &ps); // RETORNO: O número 22 foi adicionado com sucesso.
    int last = showLast(&ps);
    printf("O último número da pilha é:%d\n", last); // RETORNO: O último elemento da pilha é: 22
    int num = pop(&ps);
    printf("O número %d foi excluido.\n", num); // RETORNO: O número 22 foi excluido.
    last = showLast(&ps);
    printf("O último número da pilha é:%d\n", last); // RETORNO: O último elemento da pilha é: -1
    printf("%d\n", ps.top); // RETORNO: O-1
}
/* OBSERVAÇÕES

    Por padrão os parametros de função em C são passados por valor, isto é, a função cria uma cópia desse valor que só
 existe dentro da própria função.
    Quando queremos passar uma estrutura como parametro, passamos seu endereço.
*/