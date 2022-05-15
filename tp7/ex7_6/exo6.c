#include <stdio.h>
#include "math.h"
#define  EXIT_FAILURE 0
#define  EXIT_SUCCESS 1
#define  N 30

int ECRIRE_MATRICE(int MAT[2][3], int L, int C, int CMAX){
if(C>CMAX) {
    printf("Impossible d'afficher la matrice M car C>CMAX");
    return 0;
}
printf("{");
for(size_t i = 0; i<L; i++) {
    for (size_t j = 0; j < C; j++) {
        printf("%d\t", MAT[i][j]);
        if (j < C - 1)
            printf(",");
    }
    printf("\n");
}
    printf("}");
    return  1;
}

int main(){

    int M[2][3] = {{2,3,5}, {33, 444, 555}};
    ECRIRE_MATRICE(M, 2, 2, 3);


}
