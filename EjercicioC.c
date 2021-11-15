#include <stdio.h>

int main()
{
    int lista[60];
    int cont, positivos=0, negativos=0, cero=0;
    printf("\tLista\n");
    for (cont = 0 ; cont < 60 ; cont++)
    {
        printf("El número %d es igual a %d\n", cont, lista[cont]);
        
        if (lista[cont] > 0)
        {
            positivos = positivos + 1;
        }
        
        if (lista[cont] < 0)
        {
            negativos = negativos + 1;
        }
        
        if (lista[cont] == 0)
        {
            cero = cero + 1;
        }
    }
    printf("\n");
    printf("El total de números positivos es: %d\n", positivos);
    printf("El total de números negativos es: %d\n", negativos);
    printf("El total de números con valor igual a cero es: %d\n", cero);
    
    
    
    
    return 0;
}
