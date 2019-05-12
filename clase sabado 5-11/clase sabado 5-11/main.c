#include <stdio.h>
#include <stdlib.h>
#include "clase sabado.h"


int main()
{
    int cantNotas;
    int notaMasAlta;

    eAlumnos losAlumnos[CANTIDADALUMNOS];
    eLocalidad laLocalidad[CANTIDADLOCALIDAD];

    harcodearAlumnos(losAlumnos);
    harcodearLocalidad(laLocalidad);

    mostrasLocalidad(laLocalidad, CANTIDADLOCALIDAD);
    mostrasAlumnos(losAlumnos, CANTIDADALUMNOS);
    printf("1-\n");
    MaxAMinNombreLocalidad(laLocalidad);
    mostrasLocalidad(laLocalidad, CANTIDADLOCALIDAD);
    MinAMaxNombreLocalidad(laLocalidad);
    mostrasLocalidad(laLocalidad, CANTIDADLOCALIDAD);
    printf("2-\n");
    MinAMaxNombreAlumno(losAlumnos);
    mostrasAlumnos(losAlumnos, CANTIDADALUMNOS);
    MaxAMinNombreAlumno(losAlumnos);
    mostrasAlumnos(losAlumnos, CANTIDADALUMNOS);
    printf("3-\n");
    cantNotas = NotasMayoresA5(losAlumnos);
    printf("4-\n");
    notaMasAlta = laMejorNota(losAlumnos);
    printf("5-\n");
    nombresNotaMasAlta(losAlumnos, notaMasAlta);
    printf("6-\n");
    ordenarLocalidadesConAlumnos(losAlumnos, laLocalidad);
    printf("7-\n");
    ordenarLocalidadesConAprobados(losAlumnos, laLocalidad);
    printf("8-\n");
    alumnosDeLaLocalidad(losAlumnos, laLocalidad);
    printf("9-\n");
    alumnosAprobadosQueNoVivenEn(losAlumnos, laLocalidad);
    printf("10-\n");
    localidadConMasAlumnos(losAlumnos, laLocalidad);

    return 0;
}

