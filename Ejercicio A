#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    //Inicia ejercicio A: puntos 1 y 2.
    int num[N];
    int cont;

    printf("\tArreglo aleatorio\n");
    srand((unsigned int) time(NULL));
   for(cont=0;cont<N;cont++)
   {
       num[cont]=rand()%100;
   }

    for(cont=0;cont<N;cont++)
    {
        printf("Número %d = %d \n", cont+1, num[cont]);
    }
    //Termina ejercicio A: puntos 1 y 2.
    printf("\n\n");
    //Se omitió el ejercicio A: punto 3, se desconoce la instrucción, tampoco se encontró la solución improvisada deseada.
    
    //Inicia ejercicio A: puntos 4 y 5.
    printf("\tArreglo de reales incompleto\n");
    float reales[5] = {10, 20, 30, 0, 50};
    float k;
    int i;
    
    for(i=0;i<5;i++)
    {
        printf("Elemento %d = %.2f \n", i+1, reales[i]);
    }
    printf("\n");
    printf("Ingrese el valor que considere adecuado para el elemento 4 del arreglo:\n");
    scanf("%f", &k);
    printf("\n");
    printf("\tArreglo de reales\n");
    float reales2[5] = {10, 20, 30, k, 50};
    int i2;
    
    for(i2=0;i2<5;i2++)
    {
        printf("Elemento %d = %.2f \n", i2+1, reales2[i2]);
    }
    //Termina ejercicio A: puntos 4 y 5.
    printf("\n\n");
    //Inicia ejercicio A: puntos 6, 7 y 8.
    float array100[100];
    int cont100;

    printf("\tArreglo aleatorio de 100 números\n");
    srand((unsigned int) time(NULL));
   for(cont100=0;cont100<100;cont100++)
   {
       array100[cont100]=rand()%100;
   }

    for(cont100=0;cont100<100;cont100++)
    {
        printf("Número %d = %.2f \n", cont100+1, array100[cont100]);
    }
    
    return 0;
}

