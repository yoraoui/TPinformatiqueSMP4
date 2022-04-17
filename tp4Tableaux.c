#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8
#define M 7

//Exercice 1

int main() {
    //fixer N à 50
    int T[N], i, TPOS[N], TNEG[N], ip = 0, in = 0, d, Max;
    printf("Saisir la valeurs de Max et d<Max : \t\n");
    scanf("%d%d", &Max, &d);
    //Créer un tableaux de veleurs aléatoires positives et négatives < à Max
    for (i = 0; i < N; i++) {
        T[i] = rand() % Max - d;
    }
    for (i = 0; i < N; i++) {
        if (T[i] > 0)
            TPOS[ip++] = T[i];
        else
            TNEG[in++] = T[i];
    }
    printf("TPOS = \t");

    for (i = 0; i < ip; i++)
        printf("(%d, %d)\t", i, TPOS[i]);

    printf("\nTNEG = \t");

    for (i = 0; i < in; i++)
        printf("(%d, %d)\t", i, TNEG[i]);

}

//Exercice 2

int main(){

    int  i;
     int T[N] = {1, 5, 3, 8, 4, 9, 6, 2};
    int maximum, minimum, iMax = 0, iMin = 0;
    maximum = T[0];
    minimum = T[0];

    for(i=0; i<N; i++) {
        if (T[i] > maximum) {
            maximum = T[i];
            iMax = i;
        }

        if (T[i] < minimum) {
            minimum = T[i];
            iMin = i;
        }
    }

    for (i = 0; i < N; i++)
        printf("%d\t", T[i]);
    printf("\nMaximum = %d , indice = %d\n", maximum, iMax);
    printf("Minimum = %d , indice = %d\n", minimum, iMin);

}

//Exercice 3

int main() {

    int A[N] = {1, 4,5, 8, 9, 12,16, 22};
    int B[M] = {2, 6, 13, 20, 23, 26, 18}, i, FUS[N+M];
    int maximum, minimum, iA = 0, iB = 0, ifus = 0;



    while (iA < N && iB < M) {

        if (A[iA] < B[iB])
            FUS[ifus++] = A[iA++];
        else if (A[iA] > B[iB])
            FUS[ifus++] = B[iB++];
        else if (A[iA] == B[iB]) {
            FUS[ifus++] = B[iB++];
            iA++;
        }
    }

    if (iA == N ) {
        for (i = iB; i < M; i++)
            FUS[ifus++] = B[i];
    } else {
        for (i = iA; i < N; i++)
            FUS[ifus++] = A[i];
    }

    printf("A = :\t");
    for (i = 0; i < N; i++)
        printf("%d\t", A[i]);
    printf("\n");
    printf("B = :\t");

    for (i = 0; i < M; i++)
        printf("%d\t", B[i]);
    printf("\n");

    printf("FUS = :\t");

    for (i = 0; i < ifus; i++)
        printf("%d\t", FUS[i]);


}

//Exercice 4

int main() {

    int A[N] = {1, 5, 3, 8, 4, 9, 6, 2}, i, temp;

    int suffixSt = 0;
    while (suffixSt < N){
        for (i = suffixSt+1; i<N; i++){
            if(A[suffixSt]>A[i]){
                temp = A[suffixSt];
                A[suffixSt] = A[i];
                A[i] = temp;
            }
        }
        for (i = 0; i < N; i++)
            printf("%d\t", A[i]);
        printf("\n");
        suffixSt++;

    }

}

//Exercice 5

int main() {
    //donnee test
    int A[N] = {1, 5, 3, 8, 4, 9, 6, 2};
    int swap = 0, temp, i;
    while (!swap) {
        swap = 1;
        for (i = 1; i < N; i++) {

            if (A[i] <A[i - 1]) {
                temp = A[i];
                A[i] = A[i - 1];
                A[i - 1] = temp;
                swap = 0;
            }
        }
        for (i = 0; i < N; i++)
            printf("%d\t", A[i]);
        printf("\n");

    }
}


//Exercice 6

int main(){
    srand(time(0));
    int note[30], i, Max,somme = 0, nInf=0, nSup=0, nbreEtudiants = 30;
    float  moyenne;
    //Créer un tableaux de valeurs aléatoires
    for (i = 0; i < nbreEtudiants; i++)
        note[i] = rand()%20;
    for (i = 0; i < nbreEtudiants; i++)
        somme += note[i];
    moyenne=somme/(float)nbreEtudiants;
    for (i = 0; i < nbreEtudiants; i++){
        if(note[i]<moyenne)
            nInf++;
        else
            nSup++;
    }
    printf("Les notes sont \t\n");
    for (i = 0; i < nbreEtudiants; i++)
        printf("(%d, %d)\t", i, note[i]);

    printf("\n%d etudiant on une note inferieur a la moyenne %.2f\n", nInf, moyenne);
    printf("%d etudiant on une note inferieur a la moyenne %.2f", nSup, moyenne);


}
 
