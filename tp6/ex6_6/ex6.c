#include <stdio.h>
#define  EXIT_SUCCESS 1
#define  EXIT_FAILURE 0


int compareMat(int x[10][10], int y[10][10], int, int);

void exo6(int Mat[10][10], int n, int m, int (*tMat)[10]) {
    for(size_t i =0; i<n; i++){
        for(size_t j = 0; j<m; j++)
            printf("%d\t", *(*(Mat+i)+j));
        printf("\n");
    }
    for(size_t i =0; i<n; i++){
        for(size_t j = 0; j<m; j++)
            tMat[j][i] = Mat[i][j];}
}
int main() {
    int m1[10][10] = {{2,3,4}, {10, 4,33}, {33,2,100}};;
    int tMat[10][10];
    printf("\t Matrice 1 : \n");
    exo6(m1, 3, 3, tMat);
    int correct1[10][10] = {{2, 10, 33}, {3, 4, 2}, {4, 33, 100}};
    if  (compareMat(tMat, correct1, 3, 3) == 0)  return EXIT_FAILURE;
    int m2[10][10] = {{10,2,4, 199}, {10, 0,33,1}};;
    printf("\t Matrice 2 : \n");
    exo6(m2, 2, 4, tMat);
    int correct2[10][10] = {{10, 10}, {2, 0}, {4, 33}, {199, 1}};
    if  (compareMat(tMat, correct2, 4, 2) == 0)  return EXIT_FAILURE;
    int m3[10][10] = {{2,4}, {10, 0}};
    printf("\t Matrice 3 : \n");
    exo6(m3, 2, 2, tMat);
    int correct3[10][10] = {{2, 10}, {4, 0}};
    if  (compareMat(tMat, correct3, 2, 2) == 0)  return EXIT_FAILURE;
    int m4[10][10] = {{2,4, 5}};
    printf("\t Matrice 4 : \n");
    exo6(m4, 1, 3, tMat);
    int correct4[10][10] = {{2}, {4}, {5}};
    if  (compareMat(tMat, correct4, 3, 1) == 0)  return EXIT_FAILURE;
    printf("\t\n Exercice 6 OK \n\n");
    return EXIT_SUCCESS;
}

