//Exercice 1.1
int main(){
int Max, a, b, c;
    printf("saisir a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b)
        Max = a;
    else
        Max = b;
    if(Max<c)
        Max = c;
    printf(" Max = \t %d", Max);
}

//Exercice 1.2
int main(){
    int Max, a, b, c;

    printf("saisir a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a>b) && (a>c))
        Max = a;
    else if ((b>a) && (b>c))
        Max = b;
    else
        Max = c;
    printf(" Max = \t %d", Max);}

//Exercice 1.2 (deuxième méthode)
int main() {
    int  a, b, c, Max, MaxP;
    printf("saisir a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);
    Max = (a>b)?a:b;
    MaxP = (Max>c)?Max:c;
    printf(" Max = \t %d", MaxP);
}
//Exercice 2
int main(){
    int a, b, c, temp;

    printf("saisir a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a<b){
        temp = a;
        a = b;
        b = temp;}
    if (b<c){
        temp = b;
        b = c;
        c = temp;
    }
    if (a<b){
        temp = a;
        a = b;
        b = temp;
    }

    printf(" a b c = \t %d %d %d", a, b, c);

}
//Exercice 3
int main(){

    int a, b;

    printf("saisir a, b\n");
    scanf("%d%d", &a, &b);

    if ((a<0 && b<0)||(a>=0 && b>=0))
        printf("Le produit de a et b est positif");
    else
        printf("Le produit de a et b est negatif");

}
//Exercice 4
int main(){
    int a, b, signe = 1; //positif
    printf("saisir a, b\n");
    scanf("%d%d", &a, &b);
    if (fabs(a)>= fabs(b)){
        if (a<0)
            signe = 0;
    } else if (b<0)
        signe = 0;
    if (signe == 1)
        printf("la somme est positive");
    else
        printf("la somme est negative");
}


//Exercice 6

int main(void){
    float a, b, c; int t;
    printf("Saisir a, b, c : ");
    scanf("%f%f%f", &a, &b, &c);
    float  x1, x2, delta;
    delta = pow(b, 2) - 4*a*c;
    if (delta >0)
        t = 1;
    else if (delta==0)
        t = 2;
    else
        t = 3;
    switch (t) {
        case 1:
            x1 = (-b -sqrt(delta))/ (2 * a);
            x2 = (-b +sqrt(delta))/ (2 * a);
            break;
        case 2:
            x1 = -b / (2 * a);
            x2 = 0;
            break;
        case 3:
            x1 = -b / (2 * a);
            x2 = sqrt(-delta) / (2 * a);
            break;
    }
    if (t == 1)
        printf("x1 = \t %.4f , x2 = %.4f", x1, x2);
    else if (t == 2)
        printf("x = \t %.4f", x1);

    else if (t == 3)
        printf("x = \t%f +- j%f", x1, x2);
}

