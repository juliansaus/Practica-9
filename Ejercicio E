#include <stdio.h>

int main()
{
    int num[5] = {5, 21, 9, 17, 10};
    int *apuntador = num; //Se declara el apuntador
    int indice, suma = 0;
    float prom = 0;
    printf("\tLista de números:\n");
    //Se accede a cada elemento del arreglo haciendo uso del ciclo for
    for (indice = 0 ; indice < 5 ; indice++)
    {
    printf("El número %d es igual a %d \n", indice+1, *(apuntador+indice));
        suma = suma + *(apuntador+indice);
    }
    printf("\n");
    
    prom = (float)suma / 5;
    printf("El promedio es: %.2f\n", prom);
    printf("La suma es: %d\n", suma);
    return 0;
}
