#include <stdio.h>

void intercambiar(int A, int B);

int main(){

    int a=0, b=0;

    printf("Dame un valor para el a y otro para el b:");
    scanf("%i %i",&a,&b);

    intercambiar(a, b);
    printf("a= %i  b=%i\n",a, b);

    return 0;

}

void intercambiar(int A, int B)
{
    int aux=0;
    printf("A= %i  B=%i\n",A, B);
    aux=A;
    A = B;
    B = aux;
    printf("despues de intercambiar\n");
    printf("A= %i  B=%i\n",A, B);
}
