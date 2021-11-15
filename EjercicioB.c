#include <stdio.h>

int main()
{
    int cos[12] = {15, 34, 5, 64, 14, 52, 9, 65, 10, 38, 31, 27};
    int indice, suma = 0;
    float prom = 0;
    printf("\tToneladas mensuales cosechadas:");
    for (indice = 0 ; indice < 12 ; indice++)
    {
    printf("\nCosecha del mes %d es %d toneladas", indice+1, cos[indice]);
        suma = suma + cos[indice];
    }
    printf("\n");
    printf("\n");
    
    prom = (float)suma / 12;
    printf("El promedio de toneladas en ese año fue: %.2f toneladas.\n", prom);
    printf("\n");
    printf("\n");
    
    int cos2[12] = {15, 34, 5, 64, 14, 52, 9, 65, 10, 38, 31, 27};
    int indice2, mayor, posmayor = 0;
    printf("\tToneladas mensuales cosechadas superior al promedio:");
    mayor = cos2[0];
    for (indice2 = 0 ; indice2 < 12 ; indice2++)
    {
        if (cos2[indice2] > prom)
        {
    printf("\nCosecha del mes %d es %d toneladas", indice2+1, cos2[indice2]);
        }
        if (cos2[indice2] > mayor)
        {
            mayor = cos2[indice2];
            posmayor = indice2;
        }
    }
    printf("\n\nEn el mes %d se produjo la mayor cantidad de toneladas siendo %d.\n",posmayor+1, mayor);
    
    return 0;
}
