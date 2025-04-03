#include<stdio.h>


void getFraccion(int* numerador, int* denumerador);
void sumaFracciones(int* num1, int* denum1, int* num2, int* denum2, int* numR, int* denumR);
int DMC(int denum1, int denum2);

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

    //*numR = *num1 + *num2;
    //*denumR= *denum1;

    int dmc= DMC(*denum1, *denum2);
    int d1= *denum1, d2=*denum2;
    int m1=dmc/d1, m2=dmc/d2;

    (*num1)= (*num1) * m1;
    (*denum1)= (*denum1) * m1;
    (*num2)= (*num2) * m2;
    (*denum2)= (*denum2) * m2;


    *numR = *num1 + *num2;
    *denumR = dmc;
}

int DMC(int denum1, int denum2)
{   int dmc=2;

    for(int i=1; i<=denum1*denum2; i++)
    {
            if((i%denum1==0)&(i%denum2==0))
            {
                 dmc=i;
                 return dmc;
            }
    }
}
