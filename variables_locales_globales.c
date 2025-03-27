
#include <stdio.h>
int y=13; // variable global


void fnc(int x);

int main(){
 int x=4; //variable local
     //y variable global

 printf("y dentro de main: %i\n", y);
 printf("x dentro de main: %i\n", x);
 fnc(x);
 printf("x dentro de main despues de la llamada de fnc: %i\n", x);
 printf("y dentro de main despues de fcn: %i\n", y);

}

void fnc(int x){
    // x variable local
    //y variable global

    x = x + 10;
    printf("x dentro de fnc: %i\n", x);
    y = 1023;

}
