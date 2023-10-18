#include <stdio.h>

int main() {
    int socio[10];
    int edad[10];
    int cantidad = 0;

    printf("Ingrese el número de socio y edad de las personas:\n");

    while (cantidad < 10) {
        int num_socio, age;

        printf("Número de socio: ");
        scanf("%d", &num_socio);

        if (num_socio == 0) {
            break;
        }

        printf("Edad: ");
        scanf("%d", &age);

        socio[cantidad] = num_socio;
        edad[cantidad] = age;
        cantidad++;
    }

   
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = i + 1; j < cantidad; j++) {
            if (edad[i] > edad[j]) {
               
                int temp_edad = edad[i];
                edad[i] = edad[j];
                edad[j] = temp_edad;

                
                int temp_socio = socio[i];
                socio[i] = socio[j];
                socio[j] = temp_socio;
            }
        }
    }

    
    printf("\nLista ordenada por edad:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Número de socio: %d, Edad: %d\n", socio[i], edad[i]);
    }

    return 0;
}
