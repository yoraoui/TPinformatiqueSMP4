  
#include <stdio.h>
#include "string.h"
#define  N 2
#define  M 3
#define  P 2
#define V 6


//Ex1 a

int main() {
    //Initialisation de la matrice A et B
    int A[N][M] = {{2, 3, 4},
                   {5, 6, 7}};
    int B[M][M] = {0}; //B avec des zeros
    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < M; j++) {
            B[j][i] = A[i][j];
        }
    //Affichage
    printf("{");
    for (size_t i = 0; i < M; i++){
        for (size_t j = 0; j < N; j++){
            printf("%d", B[i][j]);
            if (j< N-1)
                printf(",");
        }
        if(i<M-1)
            printf("\n");}
    printf("}");
    }


//Ex1 b

int main(){

    int T[3][2] = {{2,3}, {5,9}, {33,2}};
    int temp;
    for(size_t i = 0; i<3; i++){

        for(size_t j = 0; j<i; j++){
            temp = T[i][j];
            T[i][j] = T[j][i];
            T[j][i] = temp;
        }}
        
        for(size_t i = 0; i<2; i++){

            for(size_t j = 0; j<3; j++){
                printf("\t %d", T[i][j]);
            }
            printf("\n");
            }
}

//Ex2 1
int main() {
    //Initialisation de la matrice A et B
    int A[N][M] = {{2, 3, 4},
                   {5, 6, 7}};
    float B[N][M] = {{2.2, 3.03, 1.02}, {4.1, 0.2, 0.3}};
    float C[N][M];
    //Sommation
    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    //Affichage
    printf("{");
    for (size_t i = 0; i < N; i++){
        for (size_t j = 0; j < M; j++){
            printf("%.2f", C[i][j]);
            if (j< M-1)
                printf(",");
        }
        if(i<N-1)
            printf("\n");}
    printf("}");
}
 
//Ex2 2

int main() {
    //Initialisation de la matrice A et B
    float A[N][M] = {{2.2, 3.03, 1.02},
                     {4.1, 0.2, 0.3}};
    int B[N][M] = {{2, 3, 4},
                   {5, 6, 7}};

    //Sommation
    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < M; j++) {
            A[i][j] = A[i][j] + B[i][j];
        }
    //Affichage
    printf("{");
    for (size_t i = 0; i < N; i++){
        for (size_t j = 0; j < M; j++){
            printf("%.2f", A[i][j]);
            if (j< M-1)
                printf(",");
        }
        if(i<N-1)
            printf("\n");}
    printf("}");
}



//Ex3

int main() {
    //Initialisation de la matrice A et B
    int A[N][M] = {{1, 2, 3},
                   {4, 5, 6}};
    float B[M][P] = {{1.,  5},
                     {2,   3.2},
                     {4.2, 3.3}};

    float  C[N][P] = {0};

    for(size_t i = 0; i<N; i++){

        for(size_t j = 0; j<P; j++){
            float somme = 0;
            for(size_t k = 0; k<M; k++)
                somme += A[i][k]*B[k][j];
            C[i][j] = somme;
        }
    }

    //Affichage
    printf("{");
    for (size_t i = 0; i < N; i++){
        for (size_t j = 0; j < P; j++){
            printf("%.2f", C[i][j]);
            if (j< P-1)
                printf(",");
        }
        if(i<N-1)
            printf("\n");}
    printf("}");

}


//Ex4 1


enum { SIZE = 200 };

int main(void)
{
    char TXT[200];
    char ch, temp;
    size_t index = 0;

    printf("Saisir une chaine de caracteres < 200: ");

    //Lire une chaine de caracteres avec une taille < 200
    int longueur = 0;
    while ((ch = getchar()) != '\n') {
        if (index < sizeof(TXT) - 1) {
            TXT[index++] =ch;
        }
    }
    TXT[index] = '\0';
    puts(TXT);
    int nbreDe_e = 0;
    for(size_t i = 0; TXT[i] != '\0'; i++) {
        longueur++;
        if (TXT[i] == 'e')
            nbreDe_e++;
    }

    TXT[longueur] = '\0';
    printf("Taille de la chaine:\t%d\n", longueur);
    printf("Nombre de 'e':\t%d\n", nbreDe_e);
    puts(TXT);

    for(size_t i  = 0; i<longueur/2; i++) {
        temp = TXT[i];
        TXT[i] = TXT[longueur - i - 1];
        TXT[longueur - i - 1] = temp;
    }
    puts(TXT);

}
// Ex5
#include "string.h"
int main() {

    char CH1[20] ;
    char CH2[20] ;
    puts("Saisir une chaine de caractères CH1\t:");
    gets(CH1);
    puts("Saisir une chaine de caractères CH2\t:");
    gets(CH2);
    int iCH1 = 0, iCH2 = 0;
    int check = 0;
    while (CH1[iCH1] != '\0' && CH2[iCH2] != '\0') {
        if ((int) CH1[iCH1] == (int) CH2[iCH2])
            {
            iCH1++; iCH2++;
            continue;}
        else if ((int) CH1[iCH1] > (int) CH2[iCH2]) {
            check = 1;
            break;
        }
        else {
            check = 2;
            break;
        }
    }
    if (check == 0)
        printf("CH1 est identique à CH2");
    else if (check == 1)
        printf("CH1 précède CH2");
    else
        printf("CH2 précède CH1");

    // Avec strcmp
    printf("strcmp:\t%d\n", strcmp(CH1, CH2));

}

//Ex 6
int main() {
    char suffixe[V][10] = {"e", "es", "e", "ons", "ez", "ent"};
    char debut[V][10] = {"je", "tu", "il", "nous", "vous", "ils"};
    char verbe[10], racine[10];
    int tailleVerbe;

    printf("Saisir un verbe avec er: \t");
    gets(verbe);
    //tester si le verbe se termine par er
    tailleVerbe = strlen(verbe);
    if (verbe[tailleVerbe - 2] != 'e' || verbe[tailleVerbe - 1] != 'r') {
        puts("Le verbe n'est pas du premier ordre");
        return 0;
    }
    strncpy(racine, verbe, tailleVerbe - 2);
    int j;
    racine[tailleVerbe - 2]='\0';
    char temp[13] = "\0";

    for (size_t i = 0; i < V; i++) {
        strcpy(temp, "\0");
        strcat(temp, debut[i]);
        strcat(temp, " ");
        strcat(temp, racine);
        strcat(temp, suffixe[i]);
        puts(temp);
    }
}


//Ex7

int main(){
    char JOURS[7][10] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
    int i;
    do {
        printf("Saisir un numéro ente 1 et 7:\t\n");
        scanf("%d", &i);
        if(i<1 || i>7)
            printf("{Index incorrect Saisir un numéro ente 1 et 7}\n");
    } while (i<1 || i>7);


    printf("%s", JOURS[i-1]);

}


