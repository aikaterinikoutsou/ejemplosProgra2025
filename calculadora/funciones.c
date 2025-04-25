#include<stdio.h>
#include "funciones.h"



extern int sumar(int a, int b){

    return incrementar(a)+b;
}

int restar(int a, int b){
    return a-b;
}


int dividir(int a, int b){
    if(b==0)
        printf("la division no es possible\n");
    else
        return a/b;
}

int multiplicar(int a, int b)
{
    return a*b;
}


int incrementar(int a){

 static int i=0;
 i = i + a;

 return i;
}
