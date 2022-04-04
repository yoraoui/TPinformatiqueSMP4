# Exercice 1.1


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
