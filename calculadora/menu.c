#include <stdio.h>
#include "funciones.h"

int printmenu();

int main(){

    int opcion=0;
    int num1=0, num2=0;

    do{

      opcion = printmenu();

      switch(opcion)
      {
        case 1:
            pedirnumeros(&num1,&num2);
            printf("\nEl resultado de la suma es: %i\n", sumar(num1,num2));
            break;
        case 2:
            pedirnumeros(&num1,&num2);
            printf("\nEl resultado de la resta es: %i\n", restar(num1,num2));
            break;
        case 3:
            pedirnumeros(&num1,&num2);
            printf("\nEl resultado de la division es: %i\n", dividir(num1,num2));
            break;
        case 4:
            pedirnumeros(&num1,&num2);
            printf("\nEl resultado de la multiplicacion es: %i\n", multiplicar(num1,num2));
            break;
        case 6:
            printf("saliendo del programma\n");
            break;
        case 5:
            pedirnumeros(&num1,&num2);
            printf("El resultado de incrementar es: %i\n",incrementar(num1));
            break;

      }


    }while(opcion!=6);


    return 0;

}


int printmenu()
{
    int opcion=0;

    printf("\n\n Por favor elija un opcion:\n");
    printf("1) sumar dos numeros\n");
    printf("2) restar dos numeros\n");
    printf("3) dividir dos numeros\n");
    printf("4) multiplicar dos numeros\n");
    printf("5) Incrementar\n");
    printf("6) Salir.\n");

    do{
        printf("La opcion tiene que ser entre 1 y 5\n");
        scanf("%i",&opcion);
    }while(opcion>6 || opcion<1);


    return opcion;
}

void pedirnumeros(int* a, int* b)
{
    printf("\nPor favor introduzca el numero a:");
    scanf("%i",a);
    printf("\nPor favor introduzca el numero b:");
    scanf("%i",b);
}



