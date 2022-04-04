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
    printf(" Max = \t %d", Max);

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
