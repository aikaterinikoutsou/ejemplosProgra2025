#include "fracciones.h"

//multiplicarFracciones
extern Fraccion multiplicarFracciones(Fraccion fr1, Fraccion fr2){

    Fraccion fr_res;
    fr_res.num = fr1.num*fr2.num;
    fr_res.denum = fr1.denum*fr2.denum;

    return fr_res;
}
