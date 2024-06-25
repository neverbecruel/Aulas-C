#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------------------- %d/%i => inteiros
//---------------------------------------------------------------- %p => endereço de memória
//---------------------------------------------------------------- %s => Strigs -cadeias de caracteres
//---------------------------------------------------------------- %f => números com ponto flutuantes -floats
//---------------------------------------------------------------- %x => número em Hexadeximal

#define MAXSIZE 100

//Filas FIFO

struct Filas {
    int itens[MAXSIZE];
    int last;
    int first;

};


int push_back(struct Filas *fila, int num){
    if (fila->last == MAXSIZE){
        printf("Fila cheia.\n");
        return 1;
    }else {
        fila->itens[fila->last] = num;
        fila->last++;
        return fila->itens[fila->last] = num;
    }
}

int pop(struct Filas *fila){
    if (fila->last <= fila->first){
        printf("Fila vazia.\n");
        return 1;
    }else{
    for (int c = 0; c < fila->last; c++) {
        fila->itens[c] = fila->itens[c+1];
    }
    fila->itens[fila->last] = 0;
    fila->last--;
    }
    }


int showFirst(struct Filas *fila){
    printf("o primeiro :%d\n", fila->itens[fila->first]);
}

int showLast(struct Filas *fila){
    printf("O ultimo :%d\n", fila->itens[fila->last]);

}

void showAll(struct Filas *fila){
    for (int i = 0; i < fila->last; i++){
        printf("%d \n", fila->itens[i]);
    }
}






int main(){
    struct Filas fila;
    fila.last = 0;
    fila.first = 0;

    push_back(&fila, 10);
    push_back(&fila, 14);
    push_back(&fila, 176);
    push_back(&fila, 111);
    push_back(&fila, 4);
    push_back(&fila, 11);
    push_back(&fila, 8);
    showFirst(&fila);
    showLast(&fila);
    pop(&fila);
    pop(&fila);
    pop(&fila);
    pop(&fila);
    showLast(&fila);
    showAll(&fila);

}