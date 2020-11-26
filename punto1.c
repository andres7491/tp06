#include <stdio.h>

float precioProducto(float *psandalias, float *pzapatillas, float *pmocasines, float *pojotas, float *pbotas);

int main()
{

        int i, articulos, producto, cantidad;
        float sandalias, zapatillas, mocasines, ojotas, botas;
        float *psandalias, *pzapatillas, *pmocasines, *pojotas, *pbotas;
        sandalias = 12, 5; // Los números decimales se escriben con .    12.5   y no  12,5
        zapatillas = 10, 25;
        mocasines = 8, 3;
        ojotas = 15;
        botas = 9;

        *psandalias = sandalias; // no podés usar los punteros sin inicializar. Acá
        // Acá apuntan a cualquier lado, porque se llamen parecido no los inicializa.
        // Antes de usarlos debés hacer por ejemplo:  psandalias = &sandalias.
        // Igual los punteros me parece que está mal planteado el uso de punteros. Fijate como dice en el
        // TP, vas a tener 3 arrglos de la misma cantidad de elementos,
        // con la dimensión de los arreglos reservada dinámicamente con la función malloc()

        *pzapatillas = zapatillas;
        *pmocasines = mocasines;
        *pojotas = ojotas;
        *pbotas = botas;

        printf("ingrese la cantidad de articulos a comprar: ");

        scanf("%d", &articulos);

        if (articulos >= 3) // Para controlar que ingese 3 artículos tenés que hacer un ciclo no un if, sino el programa no hace nada
        {
                for (i = 0; i < articulos; i++)
                {
                        float total;

                        printf("ingrese el articulo a comprar. 1: sandalias, 2: zapatillas, 3: mocacines, 4:ojotas, 5:botas\n");
                        scanf("%d", &producto);
                        printf("ingrese la cantidad");
                        scanf("%d", &cantidad);

                        //total=(precioProducto*cantidad);

                        //printf("total",&total);
                }
        }
        else
        {
                printf("seleccione al menos 3 articulos\n");
        }
}