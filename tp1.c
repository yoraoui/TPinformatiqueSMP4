
//Exercice 1

#include <stdio.h>
main()
{
    double R1, R2, R3, Rs, Rp;
    R1 =100;
    R2 = 1e4;
    R3 = 1e3;
    Rs=R1+R2+R3;
    printf("Resistance resultante en serie   : %.2f\n", Rs);
    Rp=(1/R1+1/R2+1/R3);
    Rp = 1/Rp;
    printf("Resistance resultante parallele  : %.2f\n", Rp);
}


//Exercice 2
/*Ecrire un programme qui reçoit la valeur du rayon d’un cercle et calcule :
- le périmètre : 2 * Pi * r
- la surface    :    Pi * r2
*/

#include <stdio.h>
#include <math.h>
#define  PI 3.14
int main(void)
{

    float rayon,Perimetre,Surface;
    printf("Entrez le rayon du cercle :\n");
    scanf("%f",&rayon);

    Perimetre  = 2 * PI * rayon;
    Surface = PI*rayon*rayon;

    printf("\nperimetre = %.2f\n",Perimetre);
    printf("\n Surface = %.2f\n",Surface);
}

//Exercice 4
/*
Ecrire un programme qui calcule et affiche l'aire d'un triangle dont il faut entrer les longueurs des trois côtés. Utilisez la formule :
S2 = P(P-A)(P-B)(P-C)
où A, B, C sont les longueurs des trois côtés (type int) et P le demi-périmètre du triangle.
  */
#include <stdio.h>
#include <math.h>
int main()
{
    int A,B,C;
    float P,S;
    printf("entrez la valeur de A :");
    scanf("%d",&A);
    printf("entrez la valeur de B :");
    scanf("%d",&B);
    printf("entrez la valeur de C :");
    scanf("%d",&C);
    P=(float)(A+B+C)/2;
    S=sqrt(P*(P-A)*(P-B)*(P-C));
    printf("\nS = %.2f\n",S);
    printf("\nP = %.2f\n",P);

}

//Exercice 5
#include <stdio.h>
#include <math.h>
main()
{   int largeur,longueur,Per,Surface ;
    printf("entrez la largeur  du rectangle (entier) :");
    scanf("%d",&largeur );
    printf("entrez la longueur du rectangle (entier) :");
    scanf("%d",&longueur);
    Per  = (largeur+longueur)*2;
    Surface = longueur*largeur;
    printf("perimetre = %d cm\n",Per);
    printf("Surface = %d cm\n",Surface); }

