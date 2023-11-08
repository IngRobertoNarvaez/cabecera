#include <stdio.h>
#include "../librerias/archivo.h"
#include "../librerias/archivor.h"
#include "../librerias/archivom.h"
#include "../librerias/archivod.h"
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Ingresar Primer valor\n");
    scanf("%d", &a);
    printf("Ingresar Segundo valor\n");
    scanf("%d", &b);
    printf("\n Resultado es de la suma a + b: %d", suma(a, b));
    printf("\n Resultado es de la resta a - b: %d", res(a, b));
    printf("\n Resultado es de la multiplicacion a x b: %d", mult(a, b));
    printf("\n Resultado es de la division a / b: %d", divi(a, b));
    return 0;
}
