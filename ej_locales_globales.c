#include <stdio.h>

int check(int x);
int y=0;

int main()
{
    int x=1;
    printf("el x dentro de la main: %i\n", x);  //-> 1
    y++;
    printf("el y dentro de la main antes de llamar check %i\n", y);  // --> 1
    x=check(x);
    printf("el x dentro de la main, despues de llamar check: %i\n", x); // -->6
    printf("el y dentro de la main despues de llamar check %i\n", y); // -->3
    return 0;
}
int check(int x){

    x=3*x;
    printf("el x dentro de la funcion check: %i\n", x); //--> 3
    y=x;
    printf("el y dentro de la check %i\n", y); // -->3
    x = x + y;
    return x;
}
