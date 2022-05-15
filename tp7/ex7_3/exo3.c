#include <stdio.h>
#include "math.h"
#define  EXIT_FAILURE 0
#define  EXIT_SUCCESS 1

double FACT(long N){
    double FACTo = 1.0;
    if (N == 0 || N == 1)
        return 1.0;
    while(N>=2) {
        FACTo = N *FACTo;
        N--;
    }
    return FACTo;
    }

int main(){

    double ans;
    ans = FACT(0);
    if  (ans != 1)  return EXIT_FAILURE;
    ans = FACT(1);
    if  (ans != 1)  return EXIT_FAILURE;
    ans = FACT(2);
    if  (ans != 2)  return EXIT_FAILURE;
    ans = FACT(3);
    if  (ans != 6)  return EXIT_FAILURE;
    ans = FACT(6);
    if  (ans != 720)  return EXIT_FAILURE;
    ans = FACT(9);
    if  (ans != 362880)  return EXIT_FAILURE;
    ans = FACT(12);
    if  (ans != 479001600)  return EXIT_FAILURE;
    ans = FACT(14);
    if  (ans != 87178291200)  return EXIT_FAILURE;
    ans = FACT(18);
    if  (ans != 6402373705728000)  return EXIT_FAILURE;
    ans = FACT(20);
    if  (ans != 2432902008176640000)  return EXIT_FAILURE;
  

    printf("Exo 3 PASS \n");

    return EXIT_SUCCESS;

}
