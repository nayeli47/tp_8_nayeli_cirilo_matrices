#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int sorteos[3][6] = {{0}, {0}};
    int loto[2][43] = {{0}, {0}};
    srand(time(NULL));
    int i, j, k, l, numeroIngresado = 0, n, conteo1 = 0, conteo2 = 0, auxiliar;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            sorteos[i][j] = rand() % 43;
            auxiliar = sorteos[i][j];
            for (k = 0; k < j + 1; k++)
            {
                if (sorteos[i][j] == sorteos[i][k])
                {
                    conteo2++;
                }
                if (conteo2 == 2)
                {
                    sorteos[i][j] = rand() % 43;
                    conteo2 = 0;
                    k = -1;
                }
            }
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            loto[0][sorteos[i][j]]++;
        }
    }
    
    printf("Ingrese un número:\n");
    scanf("%d", &n);
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (n == sorteos[i][j])
            {
                conteo1 = conteo1 + 1;
            }
        }
    }
    
    for (i = 0; i < 43; i++)
    {
        loto[1][i] = i;
    }
    
    for (i = 0; i < 43; i++)
    {
        for (j = 0; j < 43; j++)
        {
            if (loto[0][j] < loto[0][i])
            {
                auxiliar = loto[0][j];
                loto[0][j] = loto[0][i];
                loto[0][i] = auxiliar;
                auxiliar = loto[1][j];
                loto[1][j] = loto[1][i];
                loto[1][i] = auxiliar;
            }
        }
    }
    
    printf("El sorteo es:\n");
    for (i = 0; i < 3; i++)
    {
        printf("El sorteo %d sus números son:\n", i + 1);
        for (j = 0; j < 6; j++)
        {
            printf("\t%d", sorteos[i][j]);
        }
        printf("\n");
    }
    
    if (conteo1 > 0)
    {
        printf("El número %d aparece %d veces en los sorteos.\n", n, conteo1);
    }
    else
    {
        printf("El número %d no aparece en los sorteos.\n", n);
    }
    
    printf("Los números más frecuentes son:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Número: %d - Apariciones: %d\n", loto[1][i], loto[0][i]);
    }
    
    return 0;
}
