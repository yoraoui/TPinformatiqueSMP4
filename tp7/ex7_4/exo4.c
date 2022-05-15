#include <stdio.h>
#include "math.h"
#define  EXIT_FAILURE 0
#define  EXIT_SUCCESS 1

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



int compareArrays(int *, int *, int);


int main() {
    int arr11[] = {1,2,12,17,89,100,120};
    int  *ans;
    ans = INSERER(arr11, 7,17);
    if (ans!=NULL){
    int correct[] ={1,2,12,17,19,89,100,120};
    if  (compareArrays(ans, correct, 8) == 0)  return EXIT_FAILURE;
    printf("TEST1 ----> OK\n");}
    int  *ans1;
    int arr21[] = {15,120,190,210,800,1000,1222, 1300,2000,12000,60000,70000};
    int correct2[] ={15,120,190,210,800,1000,1100, 1222, 1300,2000,12000,60000,70000};
  ans1 = INSERER(arr21, 12,1100);
      
    if (ans1!=NULL){
        if  (compareArrays(ans1, correct2, 13) == 0)  return EXIT_FAILURE;
        printf("TEST2 ----> OK\n");}
    int  *ans2;
    int arr31[] =  {1, 2, 3, 5, 9, 20, 30, 55};
    int correct3[] = {1, 2, 3, 5, 9, 12,20, 30, 55};
    ans2 = INSERER(arr31, 8, 12);
    if (ans2!=NULL){
        if  (compareArrays(ans2, correct3, 9) == 0)  return EXIT_FAILURE;
    printf("TEST3 ----> OK\n");}
    int  *ans3;
    int arr41[] = {9, 10, 20, 30, 50};
    int correct4[] = {9, 10, 20, 30, 50, 200};
    ans3 = INSERER(arr41, 5, 200);
    if (ans3!=NULL){
        if  (compareArrays(ans3, correct4, 6) == 0)  return EXIT_FAILURE;
    printf("TEST4 ----> OK\n");}
    int  *ans4;
    int arr51[] = {9, 10, 20, 30, 50};
    int correct5[] = {7, 9, 10, 20, 30, 50};
    ans4 = INSERER(arr51, 5, 7);
    if (ans4!=NULL){
        if  (compareArrays(ans4, correct5, 6) == 0)  return EXIT_FAILURE;
    printf("TEST5 ----> OK\n");}
    printf("\t\n Exercice 4 OK \n\n");
    return EXIT_SUCCESS;
}
