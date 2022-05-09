#include <stdio.h>
#define  EXIT_SUCCESS 1
#define  EXIT_FAILURE 0
#define  TRUE 1
#define  FALSE 0


int exo4_meth1(char *A){

    // on initialise deux pointeurs sur le debur et la fin de la chaine

    int n=0;
    for(size_t i = 0;A[i]!='\0'; i++)
        n++;
    char *p1 = A, *p2= A+n-1;

    // si on trouve deux caracteres pas egales on sort de la boucle
    while (p1<p2){

        if(*p1!=*p2)
            return FALSE;
        p1++;
        p2--;

    }
    return  TRUE;

}

int exo4_meth2(char *A){
    // on initialize un seul pointeur
    char *p1;
    int n=0;
    for(size_t i = 0;A[i]!='\0'; i++)
        n++;
    int i=0;
    for(p1=A; p1<A+n/2; p1++){
        if(*p1 != *(A+n-1-i))
            return 0;
    i++;
    }
    return  1;
}


int main() {
    char *ch1 = "coloc";
    int ans1, ans2;
    ans1 = exo4_meth1(ch1);
    ans2 = exo4_meth1(ch1);

    if (ans1 != TRUE || ans2 != TRUE)  return EXIT_FAILURE;



    char *ch2 = "malayalam";
    ans1 = exo4_meth1(ch2);
    ans2 = exo4_meth2(ch2);
    if (ans1 != TRUE || ans2 != TRUE)  return EXIT_FAILURE;



    char *ch3 = "nanan";
    ans1 = exo4_meth1(ch3);
    ans2 = exo4_meth2(ch3);
    if (ans1 != TRUE || ans2 != TRUE)  return EXIT_FAILURE;



    char *ch4 = "ressasser";
    ans1 = exo4_meth1(ch4);
    ans2 = exo4_meth2(ch4);

    if (ans1 != TRUE || ans2 != TRUE)  return EXIT_FAILURE;


    char *ch5 = "motnonpalindrome";
    ans1 = exo4_meth1(ch5);
    ans2 = exo4_meth2(ch5);

    if (ans1 != FALSE || ans2 != FALSE)  return EXIT_FAILURE;


    printf("\t\n Exercice 4 PASS \n\n");

    return EXIT_SUCCESS;
}

