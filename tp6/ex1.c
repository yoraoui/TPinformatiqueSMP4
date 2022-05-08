#include <stdio.h>
#define  EXIT_SUCCESS 1
#define  EXIT_FAILURE 0


int* exo1(int *A, int x, int n){
int *p1 = A, *p2;
int j = 0, k;
while(j<n){
    if (*(p1+j) == x) {
        k = j;
        while (k < n) {
            *(p1+k) = *(p1+ k+ 1);
            k++;
        }
        *(p1+k-1) = 0;}
        else{
        j++;}
    }

    return  p1;

}

int compareArrays(int a[], int b[], int n) {
    int ii;
    for(ii = 1; ii < n; ii++) {
        if (a[ii] != b[ii]) return 0;
        // better:
        // if(fabs(a[ii]-b[ii]) < 1e-10 * (fabs(a[ii]) + fabs(b[ii]))) {
        // with the appropriate tolerance
    }
    return 1;
}


int main() {
    int arr[] = {15,12,12,11,8,10,12,11,5,1200,6,12,12,20,1992,16};;
    int  *ans;
    ans = exo1(arr, 12, 16);
    int correct[16] = {15, 11,8,10,11,5,1200,6,20,1992,16, 0, 0, 0, 0, 0};
    if  (compareArrays(ans, correct, 16) == 0)  return EXIT_FAILURE;
    printf("\n");
    int arr1[] = {1, 2, 3, 3, 5, 3, 2, 3, 6, 9};
    ans = exo1(arr1, 3, 10);
    int correct1[10] = {1, 2, 5,  2, 6, 9, 0, 0, 0, 0};
    if  (compareArrays(ans, correct1, 10) == 0)  return EXIT_FAILURE;


    int arr2[] = {2, 2, 2, 3, 5, 3, 2, 3, 2, 2};
    ans = exo1(arr2, 2, 10);
    int correct2[10] = {3, 5, 3, 3, 0, 0, 0, 0, 0, 0};
    if  (compareArrays(ans, correct2, 10) == 0)  return EXIT_FAILURE;


    printf("\t exercice 1 OK  \n\n");
    return EXIT_SUCCESS;
}

