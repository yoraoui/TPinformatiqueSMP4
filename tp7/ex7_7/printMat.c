#include <stdio.h>
int ECRIRE_MATRICE(int MAT[10][10], int L, int C, int CMAX){
if(C>CMAX) {
    printf("Impossible d'afficher la matrice M car C>CMAX");
    return 0;
}

    printf("{\t");
for(size_t i = 0; i<L; i++) {
    for (size_t j = 0; j < C; j++) {
        printf("%d\t", MAT[i][j]);
        if (j < C - 1)
            printf(",");
    }
    if(i==L-1)
        printf("}\n\n");
    else
        printf("\n");
}

    return  1;
}
