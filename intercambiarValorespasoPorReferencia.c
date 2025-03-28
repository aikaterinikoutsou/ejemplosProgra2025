#include <stdio.h>

void intercambiar(int* A, int* B);

int main(){

    int a=0, b=0;   /// a se guarda en la pos 11 y b en la pos 13

    printf("Dame un valor para el a y otro para el b:");
    scanf("%i %i",&a,&b);  /// va en la pos 11 y guarda el valor del a del teclado y en la pos 13 y guarda el valor del b del teclado

    printf("a= %i  b=%i\n",a, b); /// imprimira los valores guardados en la memoria
    printf("despues de intercambiar\n");
    intercambiar(&a, &b); /// pasamos la direccion de a(&a=11) y la direccion del b(&b=13)
    printf("a= %i  b=%i\n",a, b); /// imprimira los valores guardados en la memoria


    return 0;
}

void intercambiar(int* A, int* B)
{
    int aux=0;
    aux = *B; /// asignará al aux el valor que est guardado en la direccion de memoria B(*B)
    *B = *A;  /// asignará como valor en la posicion donde esta apuntando B(*B) el valor que esta guardado en la posicion que apunta A(*A)
    *A = aux;  /// aignará como valor en la posicion donde esta apuntando A(*A) el valor de la aux.


    //imprimir las direcciones de los punteros
    printf("%p   %i", A, *A);
}
