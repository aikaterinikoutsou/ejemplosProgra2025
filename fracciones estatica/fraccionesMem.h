#ifndef FRACCIONESMEM
#define FRACCIONESMEM

#include "fracciones.h"

#define numFr 10

Fraccion fracciones[numFr];

extern void initializeFraccMem();
extern Fraccion leerFraccion();
extern void showFracciones();
extern void printFraccion(Fraccion fr);
extern void chooseFracciones(int* ind1, int* ind2);

#endif
