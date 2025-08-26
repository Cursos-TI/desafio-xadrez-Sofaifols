#include <stdio.h>



int main() {
    int movtorre = 5, movbispo = 5, movrainha = 8, movcavalo = 3;

    //bispo, para cima e direita *diagonal*
    //torre para cima ou baixo *reta*
    //rainha para cima, baixo ou diagonal *reta e diagonal*



    //torre com FOR
    printf("MOVIMENTO TORRE:\n");
    
    for (int t= 0; t < movtorre; t++){
        //começa em 0 e vai até 5, com incremento
        printf(" -> Direita\n"); //direção torre
        
    }

    // bispo com while
    printf("MOVIMENTO BISPO:\n");
    int b = 0;
    while (b <movbispo) { //começa em 0 e vai até 5
        printf("-> Cima, direita\n"); //direção do bispo
        b++;
    }
    
    // rainha com do while
    int r = 0;
    printf("MOVIMENTO RAINHA:\n");
     do {
        printf("-> Esquerda\n "); //direção da rainha
        r++;
     } while ( r < movrainha); //começa em 0 e vai até 5




     //cavaloO com for e for
     printf("MOVIMENTO CAVALO:\n");
        for(int c= 0; c < movcavalo; c++){
            // baixo, 2x
            for (int i = 0; i<2; i++){
                    printf("->Baixo\n");


            } 
            for (int j= 0; j<1; j++){
                    printf("-> Esquerda");
            }
            printf("\n");
        }
 return 0;
     }
     
   

