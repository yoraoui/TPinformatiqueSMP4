#include <stdio.h>
#define  EXIT_SUCCESS 1
#define  EXIT_FAILURE 0

int compareArrays(int *, int *, int);
int* exo3(int *A, int *B, int N , int M){
    int *pA, *pB;
    int i = 0;
    pA = A;

    for(pB = B; pB<B+M; pB++) {
        *(pA + N + i) = *pB;
        i++;
    }
    
    return A;
}

int main() {
    int arr11[] = {15,12,12,11,8,10,12};
    int arr12[] = {11,5,1200,6,12,12,20,1992,16};;
    int  *ans;
    ans = exo3(arr11, arr12, 7, 9);
    int correct[] = {15,12,12,11,8,10,12, 11,5,1200,6,12,12,20,1992,16};
    if  (compareArrays(ans, correct, 16) == 0)  return EXIT_FAILURE;
    printf("\n");
    int arr21[] = {1, 2, 3, 3};
    int arr22[] = {5, 3, 2, 3, 6, 9};
    ans = exo3(arr21, arr22, 4, 6);
    int correct1[] = {1, 2, 3, 3, 5, 3, 2, 3, 6, 9};
    if  (compareArrays(ans, correct1, 10) == 0)  return EXIT_FAILURE;

    int arr31[] = {9, 1, 2, 3, 5};
    int arr32[] = {5,  3, 98, 3, 2, 20};
    ans = exo3(arr31, arr32, 5, 6);
    int correct2[] = {9, 1, 2, 3, 5, 5,  3, 98, 3, 2, 20};
    if  (compareArrays(ans, correct2, 10) == 0)  return EXIT_FAILURE;

    printf("\t\n Exercice 3 OK \n\n");
    return EXIT_SUCCESS;
}


