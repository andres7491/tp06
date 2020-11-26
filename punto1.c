#include <stdio.h>

float precioProducto(float *psandalias, float *pzapatillas, float *pmocasines, float *pojotas, float *pbotas);

int main()
{   

    int i, articulos,producto, cantidad;
    float sandalias, zapatillas, mocasines, ojotas, botas;
    float *psandalias, *pzapatillas, *pmocasines, *pojotas, *pbotas;
    sandalias=12,5;
    zapatillas=10,25;
    mocasines=8,3;
    ojotas=15;
    botas=9;

        *psandalias=sandalias;
        *pzapatillas=zapatillas;
        *pmocasines=mocasines;
        *pojotas=ojotas;
        *pbotas=botas;


    printf("ingrese la cantidad de articulos a comprar: ");
    scanf("%d",&articulos);




 if(articulos>=3){

for (i=0;i<articulos;i++)
{
        float total;

 printf("ingrese el articulo a comprar. 1: sandalias, 2: zapatillas, 3: mocacines, 4:ojotas, 5:botas\n");
        scanf("%d", &producto);

printf("ingrese la cantidad");
        scanf("%d", &cantidad);


//total=(precioProducto*cantidad);

//printf("total",&total);

}




}else{

printf("seleccione al menos 3 articulos\n");

}
}