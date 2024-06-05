#include <stdio.h>

int print(int num, int somador) {
    int total = num + somador;
    return total;

}

int main(){
    /*int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("1 ->%x\n", &vetor[0]); // 15e7ff6f0
    printf("2 ->%x\n", &vetor);// 25e7ff6f0
    printf("3 ->%x", vetor);// 35e7ff6f0*/
    int d = 0;
    print(d);
    printf("Fora da funcao ->%x\n", d);


}