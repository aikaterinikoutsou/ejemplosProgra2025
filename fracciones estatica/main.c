#include <stdio.h>
#include "fracciones.h"
#include "fraccionesMem.h"


int main()
{

    int opcion = 0;
    int salir = 0;
    Fraccion fr1, fr2;
    int ind_fr1=0, ind_fr2=0;

    while(!salir)
    {
        opcion=printMenu();
        switch(opcion) {

            case 1:    //addFraccion
                fr1 = leerFraccion();
                addFraccion(fr1);
                break;

            case 2: //mostrarfracciones
                showFracciones();
                break;
            case 3: //multiplicarFracciones
                chooseFracciones(&ind_fr1, &ind_fr2);
                printFraccion(multiplicarFracciones(fracciones[ind_fr1], fracciones[ind_fr2]));
                break;
            case 4: //salir
                    salir=1;
                    break;
            default:
                    printf("\nOpcion NO valida vuelve a elegir.\n");

        }
    }

    return 0;
}

int printMenu()
{
    int opcion=0;

    printf("Elija una opcion:\n");
    printf("1) Introducir Fraccion\n");
    printf("2) Mostrar Fracciones\n");
    printf("3) Multiplicar Fracciones\n");
    printf("4) Salir");

    scanf("%d", &opcion);
    return opcion;
}
