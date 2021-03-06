#include <stdio.h>
#include "math.h"
#define  EXIT_FAILURE 0
#define  EXIT_SUCCESS 1
#define  N 30

int ECRIRE_MATRICE(int MAT[10][10], int, int , int);

int SOMME_MATRICE(int MAT[10][10], int L, int C, int CMAX){
    int somme = 0;
    for(size_t i = 0; i<L; i++)
        for(size_t j = 0; j<C; j++)
            somme += *(*(MAT+i)+j);
    printf("Mat = \t");
    ECRIRE_MATRICE(MAT, L, C, CMAX);
    return  somme;
}


int main() {
    int somme;
    int m1[10][10] = {{2,3,4}, {10, 4,33}, {33,2,100}};;
    somme = SOMME_MATRICE(m1, 3, 2, 3);
    if  (somme != 54)  return EXIT_FAILURE;
    printf("TEST1 ---> OK\n");
    int m2[10][10] = {{10,2,4, 199}, {10, 0,33,1}};;
    somme = SOMME_MATRICE(m2, 2, 3, 4);
    if  (somme != 59)  return EXIT_FAILURE;
    printf("TEST2 ---> OK\n");
    int m3[10][10] = {{2,4}, {10, 0}};
    somme = SOMME_MATRICE(m3, 2, 2, 2);
    if  (somme != 16)  return EXIT_FAILURE;
    printf("TEST3 ---> OK\n");
    int m4[10][10] = {{2,4, 5}};
    somme = SOMME_MATRICE(m4, 1, 2, 3);
    if  (somme != 6)  return EXIT_FAILURE;
    printf("TEST4 ---> OK\n");
    printf("\t\n Exercice 7 PASS \n\n");
    return EXIT_SUCCESS;
}

