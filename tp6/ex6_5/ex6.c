#include <stdio.h>
#include <ctype.h>

#define  EXIT_SUCCESS 1
#define  EXIT_FAILURE 0
#define  TRUE 1
#define  FALSE 0


int exo5(char *str){

    int compteur = 1;
    char *p = str;
    while (*p!='\0'){
        if (isspace(*p))
            compteur += 1;
        p++;
    }
    return  compteur;
}


int main() {
    int ans;
    char *ch1 = "hello world";
    ans = exo5(ch1);
    if (ans != 2) return EXIT_FAILURE;
    char *ch2 = "il fait beau temps";
    ans = exo5(ch2);
    if (ans != 4) return EXIT_FAILURE;
    char *ch3 = "une annee est composee de 12 mois";
    ans = exo5(ch3);
    if (ans != 7) return EXIT_FAILURE;
    char *ch4 = "yes we can";
    ans = exo5(ch4);
    if (ans != 3) return EXIT_FAILURE;
    printf("\t\n Exercice 5 PASS \n\n");
    return EXIT_SUCCESS;

}
