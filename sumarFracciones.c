#include<stdio.h>

void getFraccion(int* numerador, int* denumerador);
void sumaFracciones(int* num1, int* denum1, int* num2, int* denum2, int* numR, int* denumR);

int main(){
    int numerador1=0, denumerador1=0, numerador2=0, denumerador2=0, numRes=0, denumRes=0;

    printf("Por favor introdusca la primera fraccion\n");
    getFraccion(&numerador1, &denumerador1);
    printf("Por favor introdusca la segunda fraccion\n");
    getFraccion(&numerador2, &denumerador2);

    sumaFracciones(&numerador1, &denumerador1, &numerador2, &denumerador2, &numRes, &denumRes);
    printf("El resultado de la suma de las dos fracciones es: %d/%d",numRes,denumRes);


}

void getFraccion(int* numerador, int* denumerador){
    printf("\nIntroduzca la fraccion a/b: ");
    scanf("%d/%d",numerador,denumerador);
}

void sumaFracciones(int* num1, int* denum1, int* num2, int* denum2, int* numR, int* denumR){

    *numR = *num1 + *num2;
    *denumR= *denum1;

}
