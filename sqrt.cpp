#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
int main() {
    int x=24;
    int g=3;
    printf("Ingrese un numero\n");
    while(fabs(g*g-x)>0.001){
            g=0.5*(g+x/g);
            }
    printf("La raiz de %i es %i", x, g);
    system("pause");
}
