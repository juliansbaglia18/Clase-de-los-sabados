#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "clase sabado.h"


int getInt (char mensaje[])
{
    int auxiliarInt;
    printf("%s", mensaje);
    scanf("%d", &auxiliarInt);
    return auxiliarInt;
}
char getChar (char mensaje[])
{
    char auxiliarChar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%s", &auxiliarChar);
    return auxiliarChar;
}

int esNumerico (char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

void getString(char mensaje[], char input[])
{
    printf("%s",mensaje);
    scanf("%s", input);
}

int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    printf("aqui");///////corte que no sale

    return 0;
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int esSoloLetras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
        i++;
    }
    return 1;
}

int esNumericoFlotante(char str[])
{
    int i=0;
    int cantidadPuntos=0;
    while(str[i] != '\0')
    {
        if (str[i] == '.' && cantidadPuntos == 0)
        {
            cantidadPuntos++;
            i++;
            continue;

        }
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}
////////////////////////////////////////

/*int lugarVacio(Product productArray[],int arrayLenght)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        if(productArray[i].status == 0)
        {
            return i;
        }
    }
    return -1;
}

int buscarPorCodigo(Product productArray[],int arrayLenght,int codigo)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        if(productArray[i].codigo == codigo && productArray[i].status == 1)
        {
            return i;
        }
    }
    return -1;
}

void setStatus(Product productArray[],int arrayLenght,int value)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        productArray[i].status = value;
        //printf("\n%d",productArray[i].status);
    }
}*/
void harcodearAlumnos(eAlumnos lista[])
{
    int i;
    char nombres[][50]= {"Maria","Jose","Pedro","Ester","Pia","Lautaro","Jere","Ariel"};
    int nota[] = {10,9,2,10,6,2,3,7};
    int localidad[] = {100,101,101,102,103,102,102,100};

    for(i=0; i<CANTIDADALUMNOS; i++)
    {
        lista[i].id = i + 1000;
        lista[i].localidad = localidad[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].nota = nota[i];
    }
}

void harcodearLocalidad(eLocalidad lista[])
{
    int i;
    int tam = 4;
    char nombres[][50]= {"Wilde","Lanus","Moron","Quilmes"};
    int codigo[] = {100,101,102,103};

    for(i=0; i<tam; i++)
    {
        lista[i].codigo = i + 100;
        strcpy(lista[i].nombre, nombres[i]);
    }
}

void mostrasLocalidad(eLocalidad lista[], int tam)
{
    int i;

    system("color F0");

    printf("Localidades: \nId\tNombres");
    for(i = 0; i < tam; i++)
    {
        printf("\n%d\t%-s",lista[i].codigo,lista[i].nombre);
    }
    printf("\n\n");
}

void mostrasAlumnos(eAlumnos lista[], int tam)
{
    int i;
    printf("Alumnos: \nId\tNombre\tNota \tLocalidad");
    for(i = 0; i < tam; i++)
    {
        printf("\n%d\t%-s\t%-d\t%-d",lista[i].id,lista[i].nombre,lista[i].nota,lista[i].localidad);
    }
    printf("\n\n");
}

void MaxAMinNombreLocalidad(eLocalidad dato[])
{
    eLocalidad aux;
    int i;
    int j;

    printf("Muestro del maximo al minimo de las localidades por nombres: \n");

    for(i = 0; i < CANTIDADLOCALIDAD; i++)
    {
        for(j = 0; j < CANTIDADLOCALIDAD; j++)
        {
            //if(dato[j].nombre > dato[i].nombre)
            if(strcmp(dato[j].nombre,dato[i].nombre) > 0)
            {
                aux = dato[i];
                dato[i]=dato[j];
                dato[j]=aux;
            }
        }
    }
}

void MinAMaxNombreLocalidad(eLocalidad dato[])
{
    eLocalidad aux;
    int i;
    int j;

    printf("Muestro del minimo al maximo de localidades por nombre: \n");

    for(i = 0; i < CANTIDADLOCALIDAD; i++)
    {
        for(j = 0; j < CANTIDADLOCALIDAD; j++)
        {
            if(strcmp(dato[j].nombre,dato[i].nombre) < 0)
            {
                aux = dato[i];
                dato[i]=dato[j];
                dato[j]=aux;
            }
        }
    }
}

void MinAMaxNombreAlumno(eAlumnos dato[])
{
    eAlumnos aux;
    int i;
    int j;

    printf("Muestro del minimo al maximo de alumnos por nombre: \n");

    for(i = 0; i < CANTIDADALUMNOS; i++)
    {
        for(j = 0; j < CANTIDADALUMNOS; j++)
        {
            if(strcmp(dato[j].nombre,dato[i].nombre) < 0)
            {
                aux = dato[i];
                dato[i]=dato[j];
                dato[j]=aux;
            }


        }
    }
}

void MaxAMinNombreAlumno(eAlumnos dato[])
{
    eAlumnos aux;
    int i;
    int j;

    printf("Muestro del maximo al minimo de los alumnos por nombre: \n");

    for(i = 0; i < CANTIDADALUMNOS; i++)
    {
        for(j = 0; j < CANTIDADALUMNOS; j++)
        {
            if(strcmp(dato[j].nombre,dato[i].nombre) > 0)
            {
                aux = dato[i];
                dato[i]=dato[j];
                dato[j]=aux;
            }


        }
    }
}

int NotasMayoresA5(eAlumnos dato[])
{
    int i;
    int cont = 0;
    for(i = 0; i < CANTIDADALUMNOS; i++)
    {
        if(dato[i].nota > 5)
        {
            cont++;
        }
    }
    printf("La cantidad de notas mayores a 5 es: %d\n\n",cont);

    return cont;
}

int laMejorNota(eAlumnos dato[])
{
    int i;
    int max = 0;

    for(i=0; i < CANTIDADALUMNOS; i++)
    {
        if(dato[i].nota>max)
        {
            max = dato[i].nota;
        }
    }
    printf("La nota mas alta es: %d\n\n",max);


    return max;
}
void nombresNotaMasAlta(eAlumnos dato[], int laNota)
{
    int i;
    printf("Nombre/s de nota mas alta: \n");
    for(i = 0; i < CANTIDADALUMNOS; i++)
    {
        if(dato[i].nota == laNota)
        {
            printf("-%s\n", dato[i].nombre);
        }
    }
    printf("\n");

}

void ordenarLocalidadesConAlumnos(eAlumnos alumnos[], eLocalidad localidad[])
{
    int i;
    int j;

    printf("Localidades con alumnos ordenados: \n");
    for(i = 0; i < CANTIDADLOCALIDAD; i++)
    {
        for(j = 0; j < CANTIDADALUMNOS; j++)
        {
            if(localidad[i].codigo == alumnos[j].localidad)
            {
                printf("%s\t%-s\n",localidad[i].nombre,alumnos[j].nombre);
            }
        }
    }
    printf("\n");
}

void ordenarLocalidadesConAprobados(eAlumnos alumnos[], eLocalidad localidad[])
{
    int i;
    int j;

    printf("Localidades con alumnos aprobados: \n");
    for(i = 0; i<CANTIDADALUMNOS; i++)
    {
        if(alumnos[i].nota > 5)
        {
            for(j = 0; j < CANTIDADLOCALIDAD; j++)
            {
                if(alumnos[i].localidad==localidad[j].codigo)
                {
                    printf("%s\t%-s\n",alumnos[i].nombre,localidad[j].nombre);
                }
            }
        }
    }
    printf("\n");
}

void alumnosDeLaLocalidad(eAlumnos alumnos[], eLocalidad localidad[])
{
    int i;
    int j;
    char auxLocalidad[51];
    getString("Escriba la localidad de la que desea ubicar alumnos: ", auxLocalidad);

    while(esSoloLetras(auxLocalidad) != 1)
    {
        getString("ERROR. Escriba la localidad de la que desea ubicar alumnos: ", auxLocalidad);
    }
    for(i = 0; i < CANTIDADLOCALIDAD; i++)
    {
        if(strcmp(auxLocalidad,localidad[i].nombre)==0)
        {
            break;
        }
    }
    for(j=0; j < CANTIDADALUMNOS; j++)
    {
        if(localidad[i].codigo == alumnos[j].localidad)
        {
            printf("%s\n",alumnos[j].nombre);
        }
    }
    printf("\n");
}

void alumnosAprobadosQueNoVivenEn(eAlumnos alumnos[], eLocalidad localidad[])
{
    int i;
    int j;
    char auxLocalidad[51];

    getString("Escriba la localidad que desea saber que no aprobaron: ", auxLocalidad);
    while(esSoloLetras(auxLocalidad) != 1)
    {
        getString("ERROR. Escriba la localidad que desea saber que no aprobaron: ", auxLocalidad);
    }
    for(i = 0; i < CANTIDADLOCALIDAD; i++)
    {
        if(strcmp(auxLocalidad,localidad[i].nombre)==0)
        {
            break;
        }
    }
    for(j = 0; j < CANTIDADALUMNOS; j++)
    {
        if(alumnos[j].nota > 5 && alumnos[j].localidad != localidad[i].codigo)
        {
            printf("%s\n",alumnos[j].nombre);
        }
    }
    printf("\n");

}

void localidadConMasAlumnos(eAlumnos alumnos[], eLocalidad localidad[])
{
    int i;
    int j;
    int max = 0;
    int cont[CANTIDADLOCALIDAD];

    for (i=0; i < CANTIDADLOCALIDAD; i++)
    {
        cont[i]=0;
    }

    for(i=0; i < CANTIDADLOCALIDAD; i++)
    {
        for(j=0; j < CANTIDADALUMNOS; j++)
        {
            if(localidad[i].codigo == alumnos[j].localidad)
            {
                cont[i]++;
            }
        }
    }
    /*for(i = 0; i < CANTIDADLOCALIDAD; i++)
    {
        printf("%s\t%-d\n",localidad[i].nombre,cont[i]);
    }*/
    for(i=0; i < CANTIDADLOCALIDAD; i++)
    {
        if(cont[i] > max)
        {
            max = cont[i];
        }
    }
    printf("El maximo de alumnos es: %d\n",max);
    for(i=0; i < CANTIDADLOCALIDAD; i++)
    {
        if(cont[i] == max)
        {
            printf("-%s\n",localidad[i].nombre);
        }
    }
}











