#include <stdio.h>
#include "math.h"
#define  EXIT_FAILURE 0
#define  EXIT_SUCCESS 1
#define  N 30
int *INSERER(int*, int, int);

int *TRI_INSERTION(int  *t, int size){
    //creer un tableau pour le trie (comme un buffer car nous avons besoin de mémoire pour stocker les valeur)
    // Utiliser un pointeur sont allocation va générer une erreur "stack smashing detected"
    int trie[N] = {t[0]};
    // creer un pointeur sur le tableau
    int *p = trie;
    int j;
    // sz est la taille du tableau trie
    int sz = 1;
    while(sz<size){
        j = sz;
        INSERER(p,sz, t[j]);
        sz++;
    }
    return  p;
    }

int compareArrays(int *, int *, int n) ;

int main() {
    int arr11[] = {1,22,2,17,89,10,12};
    int  *ans;
    ans = TRI_INSERTION(arr11, 7);
    if (ans!=NULL){
    int correct[] ={1, 2, 10, 12, 17, 22, 89};
    if  (compareArrays(ans, correct, 7) == 0)  return EXIT_FAILURE;
    printf("TEST1 ----> OK\n");}
    int  *ans1;
    int arr21[] = {12000, 15, 60000, 210, 1300, 190, 2000, 120, 70000, 1222, 1000, 800};
    int correct2[] ={15, 120, 190, 210, 800, 1000, 1222, 1300, 2000, 12000, 60000, 70000};
    ans1 = TRI_INSERTION(arr21, 12);

    if (ans1!=NULL){
        if  (compareArrays(ans1, correct2, 12) == 0)  return EXIT_FAILURE;
        printf("TEST2 ----> OK\n");}
    int  *ans2;
    int arr31[] =  {20, 3, 9, 1, 30, 55, 2, 5};
    int correct3[] = {1, 2, 3, 5, 9, 20, 30, 55};
    ans2 = TRI_INSERTION(arr31, 8);
    if (ans2!=NULL){
        if  (compareArrays(ans2, correct3, 8) == 0)  return EXIT_FAILURE;
    printf("TEST3 ----> OK\n");}
    int  *ans3;
    int arr41[] = {10, 50, 30, 20, 9};
    int correct4[] = {9, 10, 20, 30, 50};
    ans3 = TRI_INSERTION(arr41, 5);
    if (ans3!=NULL){
        if  (compareArrays(ans3, correct4, 5) == 0)  return EXIT_FAILURE;
    printf("TEST4 ----> OK\n");}
    int  *ans4;
    int arr51[] = {30, 9, 50, 20, 10};
    int correct5[] = {9, 10, 20, 30, 50};
    ans4 = TRI_INSERTION(arr51,5);
    if (ans4!=NULL){
        if  (compareArrays(ans4, correct5, 5) == 0)  return EXIT_FAILURE;
    printf("TEST5 ----> OK\n");}
    printf("\t\n Exercice 6 OK \n\n");
    return EXIT_SUCCESS;
}
