#include <stdio.h>
#define  EXIT_SUCCESS 1
#define  EXIT_FAILURE 0

int compareArrays(int a[], int b[], int n);

int* exo2(int *A, int n){
    int *p1, *p2, AIDE;
    int i=0;
    for(p1 = A, p2 = A+n-1; p1<p2; p1++, p2--){
        AIDE = *p1;
        *p1 = *p2;
        *p2 = AIDE;
        i++;
    }
    return  A;
}

int main() {
    int arr[] = {15,12,12,11,8,10,12,11,5,1200,6,12,12,20,1992,16};;
    int  *ans;
    ans = exo2(arr, 16);
    int correct[16] = {16, 1992, 20, 12, 12, 6, 1200, 5, 11, 12, 10, 8, 11, 12, 12, 15};
    if  (compareArrays(ans, correct, 16) == 0)  return EXIT_FAILURE;
    printf("\n");
    int arr1[] = {1, 2, 3, 3, 5, 3, 2, 3, 6, 9};
    ans = exo2(arr1, 10);

    int correct1[10] = {9, 6, 3, 2, 3, 5, 3, 3, 2, 1};
    if  (compareArrays(ans, correct1, 10) == 0)  return EXIT_FAILURE;
    
    int arr2[] = {9, 1, 2, 3, 5, 3, 98, 3, 2, 20};
    ans = exo2(arr2, 10);
    int correct2[10] = {20, 2, 3, 98, 3, 5, 3, 2, 1, 9};
    if  (compareArrays(ans, correct2, 10) == 0)  return EXIT_FAILURE;

    printf("\t\n Exercice 2 OK \n\n");
    return EXIT_SUCCESS;
}

