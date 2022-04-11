
#include <stdio.h>
#include "math.h"
//ex1
// valeur max est 12, à partir de 13 mettre long fact
int main() {

    int fact = 1, i, n;
    printf("Saisir un nombre:\t");
    scanf("%d", &n);
    for(i=2; i<=n; i++)
        fact *= i;

    printf("Fact de %d egale \t %d", n, fact);
    return  0;
}

//ex2
int main(){
    int n, i=1;
    printf("Saisir un nombre n:\t\n");
    scanf("%d", &n);

    while(i<=n/2) {
        if (n % i == 0)
            printf("Le nombre %d est une diviseur de %d\n", i, n);
        i++;
    }
    return 0;
    }

//ex3.1
int main() {

    int fact = 1, i, n, check;
    printf("Saisir un nombre:\t");
    scanf("%d", &n);
    check = 0; //nombre premier
    for (i = 2; i < n; i++) {
        if (n % i == 0)
            check = 1;
    }
    if (check == 0)
        printf("**Le nombre %d est premier**", n);
    else
        printf("**Le nombre %d n'est pas premier**", n);

}

//ex3.2
int main() {

    int i, k, n, check;
    printf("Saisir un nombre:\t");
    scanf("%d", &n);

    for (k = 2; k <= n; k++) {
        check = 0; //nombre k premier

        for (i = 2; i <k/2 ; i++) {
            if (k % i == 0)
                check = 1;
        }
        if (check == 0)
            printf("**Le nombre %d est premier**\n", k);
        else
            printf("**Le nombre %d n'est pas premier**\n", k);

    }
}



//ex4

/* Test entré -- sortie
 * 1 -- 1
 * 2 -- 1.5
 * 11 -- 3.0
 * 20 -- 3.60
 */

int main() {


    int i, N;
    float somme = 0.0;
    printf("Saisir un nombre (N):\t");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        somme += 1.0 / i;
    printf("La somme de la serie harmonique de %d est:\t %.2f", N, somme);
}


//ex5

//test entree 3 -- sortie 10.5

int main(){
    int i, k, n;
    float SOM, Si, Ui;
    printf("Saisir un nombre (n):\t");
    scanf("%d", &n);
    SOM = 0.0;
    for(i=1; i<=n; i++){
        Si = 0;
        for (k = 1; k <=i; k++)
            Si += k;
        Ui = pow(n, i) / (float) Si;
        SOM += Ui;
    }
    printf("La sommation avec n = %d est \t%.3f", n, SOM);
}

//ex6


int main(){

    int n, somme = 0, produit = 1, compteur = 0;
    float moyenne;
    for(;;) {
        do {
            printf("Saisir un chiffre dans l'intervalle 1 et 9:\t\n");
            scanf("%d", &n);
        } while (n < 0 || n > 9);

        if(n==0){
            printf("\a");
            break;}
        somme += n;
        produit *= n;
        compteur += 1;
    }
    moyenne = (float)somme/compteur;

    printf("La somme egale:\t %d\n", somme);
    printf("Le produit egale:\t %d\n", produit);
    printf("La moyenne egale:\t %.3f", moyenne);
}

//ex7
// entrée 16 - sortie 987
int main(){

    int u1 = 1, u2 = 1, n, i, un;

    printf("Saisir un nombre n:\t\n");
    scanf("%d", &n);
    if (n==1 || n==2){
        printf("un = \t%d", 1);
        return 0;
    }
    for(i = 2; i<n; i++){
        un = u2 + u1;
        u1 = u2;
        u2 = un;
    }

    printf("un = \t%d", un);
}

/*
Exercice Afficher 
1 3 5 7
1 4 7 10 13
1 5 9 13 17 21
1 6 11 16 21 26 31
*/  
int main() {
int n = 4, cmpt = 4, i, j;
for (i = 0; i < n; i++) {
    j = 1;
    k = 1;
    while (k<=4+i){
        printf("%d ", j);
        j +=2+i;
        k++;
    }
    printf("\n");
}
}
