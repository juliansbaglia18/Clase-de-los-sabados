#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3

int getPrecio(char *mensaje, float *elPrecio);
int getCodigo(char *mensaje, char *codigo);



 /** \brief
 *vamos a administrar los productos de un comercio
 * \param
 * \param
 * \return int
 *
 */
int main()
{
    float precios[TAMANIO];
    char codigos[TAMANIO][7];
    //char codigos[7][TAMANIO];
    int i;
    int respuesta;

    for(i=0; i<TAMANIO;i++)
    {
        while(getPrecio("Ingrese precio: ", &precios[i])==0)
        {
            printf("ERROR ");
        }
        while(getCodigo("Ingrese codigo: ", codigos[i])==0)
        {
            printf("ERROR ");
        }
    }

    for(i=0; i<TAMANIO;i++)
    {
        printf("El precio es: %f\n", precios[i]);
    }

    printf("De array a estructura\n");

    return 0;
}
int getPrecio(char *mensaje, float *elPrecio)
{
    char ingreso[50];
    float auxPrecio;
    int retorno = 0;


    printf(mensaje);
    scanf("%s", ingreso);
    auxPrecio = atof(ingreso);//recibe una constante y me devuelve el valor
    if(auxPrecio)
    {
        *elPrecio = auxPrecio;
        retorno = 1 ;
    }
    return retorno;
}
int getCodigo(char *mensaje, char *codigo)
{
    char ingreso[50];
    int retorno = 0;
    printf(mensaje);
    scanf("%s", ingreso);
    //ingreso [50]= "lalala";

    if(srtlen(ingreso) == 6)//devuelve la cantidad de caracteres
    {
        //strcpy(codigo,ingreso);//igualar srtlen ingreso a codigo
       retorno = 1;
    }
    return retorno;
}
