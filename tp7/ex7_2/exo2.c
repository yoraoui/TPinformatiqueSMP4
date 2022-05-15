#include <stdio.h>
#include "math.h"
#define  EXIT_FAILURE 0
#define  EXIT_SUCCESS 1

int NCHIFFRES(long N){
    /*
     * Entrée  un long
     * Sorties nbre de chiffre
     */
    // Calcul de la valeur absolue
    N = fabs(N);
    // Initialiser un compteur de nombres de chiffres
    int compt = 0;
    while(N >=1){
    N = round(N/10);
    compt++;
}
    return  compt;
}

int main(){

    int ans;
    ans = NCHIFFRES(32);
    if  (ans != 2)  return EXIT_FAILURE;
    ans = NCHIFFRES(123443);
    if  (ans != 6)  return EXIT_FAILURE;
    ans = NCHIFFRES(567899786544477883);
    if  (ans != 18)  return EXIT_FAILURE;

    ans = NCHIFFRES(-3);
    if  (ans != 1)  return EXIT_FAILURE;


    ans = NCHIFFRES(6457392);
    if  (ans != 7)  return EXIT_FAILURE;
    ans = NCHIFFRES(-3877);
    if  (ans != 4)  return EXIT_FAILURE;


    printf("Exo 2 PASS");

    return EXIT_SUCCESS;

}
