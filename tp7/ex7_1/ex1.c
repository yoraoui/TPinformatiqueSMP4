#include <stdio.h>
#include <math.h>
#define  EXIT_SUCCESS 1
#define  EXIT_FAILURE 0

float  exo1(int x){
  return sin(x)+log(x);
}


int main() {
    float ans; 
    ans = exo1(3);
    printf("%f", ans/10000)
    if  (ans != 1.2397)  return EXIT_FAILURE;
    ans = exo1(7);
    if  (ans != 2.60289)  return EXIT_FAILURE;

    printf("Exo 1 Pass !");
    return EXIT_SUCCESS;
}

