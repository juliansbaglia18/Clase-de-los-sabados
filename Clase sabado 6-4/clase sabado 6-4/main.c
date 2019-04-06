#include <stdio.h>
#include <stdlib.h>
int dameEdad(int *edad, char *mensaje);//el * es un direccionador
int dameEdadDos(int *edad, char *mensaje);
int dameEdadTres(int *edad, char *mensaje);
int dameEdadConIntentos(int *edad, char *mensaje, int *intentos);

int main()
{
    int algo;
    int seCargo;
    int respuesta = dameEdadConIntentos(&algo, "Dame la edad", 0);
    if (respuesta == 1)
    {
        printf("Perdio");
    }
    /*
    do{
    seCargo = dameEdadTres(&algo, "Que edad tenes? ");
    if (seCargo == 1)
    {
        printf("La edad es: %d",algo);
    }
    }while(seCargo == 0);
    */


    return 0;
}

int dameEdad(int *edad, char *mensaje)
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
{
    int sePudo = 0;
    int aux;
    printf(mensaje);
    sePudo = scanf("%d", &aux);
    if (sePudo == 1)
    {
        *edad = aux;
        //edad = aux; //Este no anda, el de arriba si;

    }
    return sePudo;
}
int dameEdadDos(int *edad, char *mensaje)
{
    int sePudo = 1;
    char cadenaCargado[20];//cadena memoria(?)
    printf(mensaje);
    scanf("%s", cadenaCargado);
    *edad = atoi(cadenaCargado);//atoi transforma cadena en entero

    return sePudo;
}
int dameEdadTres(int *edad, char *mensaje)
{
    int sePudo = 1;
    char cadenaCargado [20];
    int i;
    printf(mensaje);
    scanf("%s", cadenaCargado);

    for (i = 0; i < strlen(cadenaCargado); i++)//strlen da la cantidad de caracteres que tenga el array
    {
        if(cadenaCargado[i] < '0' || cadenaCargado[i] > '9')
        {
            sePudo = 0;
        }
    *edad = atoi(cadenaCargado);
    }
    return sePudo;
}

int dameEdadConIntentos(int *edad, char *mensaje, int *intentos)
{
    int rta = 0;
    int seCargo;
    int algo;
    int intentos2 = 0;
    do{

    seCargo = dameEdadTres(&algo, "Que edad tenes? ");

    intentos2 ++;

    if (seCargo == 1)
    {
        printf("La edad es: %d",algo);

    }

    }while(seCargo == 0 && intentos2 < 3);

    if(intentos == 3)
    {
        rta = 1;
    }
    return rta;
}

