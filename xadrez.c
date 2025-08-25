#include <stdio.h>



int main() {
    int movtorre = 5, movbispo = 5, movrainha = 8;

    //bispo, para cima e direita *diagonal*
    //torre para cima ou baixo *reta*
    //rainha para cima, baixo ou diagonal *reta e diagonal*



    //torre com FOR
    printf("MOVIMENTO TORRE:\n");
    
    for (int t= 0; t <movtorre; t++); //começa em 0 e vai até 5
        printf(" -> Direita\n"); //direção torre
        


    // bispo com while
    printf("MOVIMENTO BISPO:\n");
    int b = 0;
    while (b <movbispo) { //começa em 0 e vai até 5
        printf("-> Cima, direita\n"); //direção do bispo
        b++;
    }
    
    // rainha com do while
    printf("MOVIMENTO RAINHA:\n");
    
    int r = 0;
     do {
        printf("-> Esquerda"); //direção da rainha
        r++;
     } while ( r <movrainha); //começa em 0 e vai até 5



        



    return 0;
}
