#include <stdio.h>

void mover_torre(int casas) {
    if (casas > 0) {
        printf("->Direita\n");
        mover_torre(casas - 1);
    }
}
void mover_bispo(int casas){
    if (casas > 0) {
        printf("-> Cima, direita\n");
        mover_bispo(casas -1);
    }
}
void mover_rainha (int casas){
    if (casas > 0){
        printf("-> Esquerda\n");
        mover_rainha(casas -1);
    }
}
int main() {
    int  movbispo = 5, movrainha = 8, movcavalo = 3;

    //bispo, para cima e direita *diagonal*
    //torre para cima ou baixo *reta*
    //rainha para cima, baixo ou diagonal *reta e diagonal*



    //com recursivo, torre
    int casatorre = 5;
    printf("MOVIMENTO TORRE:\n");
    mover_torre(casatorre);

   /* //torre com FOR
    //for (int t= 0; t < movtorre; t++){
        //começa em 0 e vai até 5, com incremento
        //printf(" -> Direita\n"); //direção torre
        */

    
  /*  // bispo com while
    //printf("MOVIMENTO BISPO:\n");
    //int b = 0;
    //while (b <movbispo) { //começa em 0 e vai até 5
       // printf("-> Cima, direita\n"); //direção do bispo
        //b++;
        */
    //com recursividade
    int casabispo = 5;
    printf("MOVIMENTO BISPO:\n");
    mover_bispo(casabispo);
  
    
    /*// rainha com do while
    //int r = 0;
    //printf("MOVIMENTO RAINHA:\n");
    // do {
      //  printf("-> Esquerda\n "); //direção da rainha
       // r++;
     //} while ( r < movrainha); //começa em 0 e vai até 8
*/
    int casarainha =8;
    printf("MOVIMENTO RAINHA:\n");
    mover_rainha(casarainha);


    /* //cavaloO com for e for
     printf("MOVIMENTO CAVALO:\n");
        for(int c= 0; c < movcavalo; c++){
            // baixo, 2x
            for (int i = 0; i<2; i++){
                    printf("->Baixo\n");

            } //e uma vez para esquerda

            for (int j= 0; j<1; j++){
                    printf("-> Esquerda");
            }
            printf("\n");
        }
            */
    // cavalo com break e aninhado?
    for (int c = 0; c<3; c++){ //2 movimentos cima
        if()
    }

/*
        // cCAvalo com while e for
        printf("MOVIMENTO CAVALO:\n");

        for (int c =0; c <movcavalo; c++){
            int i = 0;
            while( i <2){
                printf("->Baixo\n");
                i++;
            }
                printf("->Esquerda\n");
            
        }
        printf("\n");
        
*/







