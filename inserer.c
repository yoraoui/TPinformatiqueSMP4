#include <stdio.h>
#define  EXIT_FAILURE 0
#define  EXIT_SUCCESS 1
#define  N 30
int *INSERER(int  *t, int size, int X ) {
    int i=0;
    //Boucler sur les elements du tableau tant qu on est pas arrive a la derniere valeur
    while (*(t + i) <= X && i<size){
        if (*(t + i) == X) {
            printf("L'elément %d existe dans le tableau \t\n", X);
            return NULL;
        }
        i++;}

    //decaler a droite les valeurs du tableau ayant une valeur superieur a X
    for (size_t j = size; j > i; j--)
        *(t + j) = *(t + j - 1);
    // inserer la valeur X au tableau dans la case aec l indice i
    *(t + i) = X;

    return t;
}

