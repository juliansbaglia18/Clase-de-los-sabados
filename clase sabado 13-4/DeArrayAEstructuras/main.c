#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3
typedef struct{
    float precios ;
    char codigos[7];
}Producto;


int getPrecio(char *mensaje,float *elPrecio);
int getCodigo(char *mensaje,char *codigo);





/** \brief
 * vamos aadministrar los productos de un comercio
 * cod 6 caracteres
 *  precio

 * \return int
 *
 *
 */
int main()
{

    float precios[TAMANIO] ;
    char codigos[TAMANIO][7];
    //char codigos[7][TAMANIO];
    Producto unProducto;
    Producto arrayDeProductos[TAMANIO];//array de producto
    int i;
    int j;
    while(getPrecio("Ingrese precio: ",&arrayDeProductos [i].precios)==0){
        printf("ERROR ");
       }
        while(getCodigo("Ingrese codigo: ",arrayDeProductos[i].codigos)==0){
        printf("ERROR ");
       }
//    printf("codigo:%s precio: %f \n",arrayDeProductos.codigos,arrayDeProductos.precios);

     for(i=0;i<TAMANIO;i++)
    {
       while(getPrecio("Ingrese precio: ",&precios[i])==0){
        printf("ERROR ");
       }


        while(getCodigo("Ingrese Codigo: ",codigos[i])==0){
        printf("ERROR ");
       }

    }

    for(i=0;i<TAMANIO;i++)
    {
        printf("codigo:%s precio: %f \n",codigos[i],precios[i]);
    }

    for(i=0;i<TAMANIO;i++)
    {
        for(j=0;j<TAMANIO;j++)
        {
            if(arrayDeProductos[i].precios<arrayDeProductos[j].precios)
            {
                Producto aux = arrayDeProductos[i];
                arrayDeProductos[i]=arrayDeProductos[j];
                arrayDeProductos[j]=aux;
            }

        }
    }
    printf("\n\tOrdenado\n");
    for(i=0;i<TAMANIO;i++)
    {
        printf("codigo: %s precio: %f \n",arrayDeProductos[i].codigos,arrayDeProductos[i].precios);
    }
    printf("De array a estruturas \n");
    return 0;
}
int getCodigo(char *mensaje,char *codigo)
{
    char ingreso[50];
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    if( strlen(ingreso)==6)
    {
        strcpy(codigo,ingreso);
        retorno=1;
    }
    return retorno;

}
int getPrecio(char *mensaje,float *elPrecio)
{
    char ingreso[50];
    float auxPrecio;
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    auxPrecio=atof(ingreso);
    if(auxPrecio>0)
    {
      *elPrecio  = auxPrecio;
      retorno= 1;
    }
    return retorno;

}

/*crear producto alumno
    CARGA
    validacion
    ordenamiento
    lña mejor nota
    el mas alto
    de los que aprbaron el mas alto
    de los que miden mas de 1.80, el promedio
*/
