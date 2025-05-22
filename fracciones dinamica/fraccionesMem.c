#include "fraccionesMem.h"
#include <stdio.h>

int contadorFR = 0;

extern void initializeFraccMem(){

    fracciones = (Fraccion*) calloc(numFr, sizeof(Fraccion));

    for(int i=0; i<numFr; i++)
    {
        (fracciones+i)->num =0;
        (fracciones+i)->denum =0;
    }
}


extern void addFraccion(Fraccion fr){
        *(fracciones+contadorFR) = fr;
        contadorFR++;
}

extern Fraccion leerFraccion(){
    int num=0, denum=0;
    Fraccion fr;

    printf("\nIntroduzca el valor de numerador:");
    scanf("%i", &num);
    printf("\nIntroduzca el valor de denumerador:");
    scanf("%i", &denum);
    fr.num = num;
    fr.denum = denum;

    return fr;
}


extern void showFracciones(){
    int i=0;

    for(i=0; i<numFr; i++)
    {
        printFraccion(*(fracciones+i));
    }
}

extern void printFraccion(Fraccion fr)
{
    printf("\n%d/%d\n", fr.num, fr.denum);
}

extern void chooseFracciones(int* ind1, int* ind2)
{

    printf("\nElija cual es la primera Fraccion: ");
    scanf("%d",ind1);
    printf("\nElija cual es la segunda Fraccion: ");
    scanf("%d",ind2);
}
