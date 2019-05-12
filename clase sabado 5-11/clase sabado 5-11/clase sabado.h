#define CANTIDADALUMNOS 8
#define CANTIDADLOCALIDAD 4

typedef struct{

    char nombre[51];
    int codigo;

}eLocalidad;

typedef struct{
    int id;
    char nombre[51];
    int nota;
    int localidad;
}eAlumnos;


/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el numero ingresado por el usuario.
 */
int getInt (char mensaje[]);

/** \brief Solicita un caracter al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el caracter ingresado por el usuario.
 */
char getChar(char mensaje[]);

/** \brief Verifica si el valor recibido es numerico.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si es numero // 0 si no es numero.
 */
int esNumerico (char str[]);

/** \brief Solicita un texto al usuario.
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargara el texto ingresado.
 * \return void.
 */
void getString(char mensaje[], char input[]);


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[]);

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[]);

/**
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumerosFlotantes(char mensaje[],char input[]);

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[]);

/**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumericoFlotante(char str[]);

/////////////////////////////


/**
 * \brief Inicializa el status en un array de productos
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a estatus
 * \return -
 *
 */
//void setStatus(eAlumnos productArray[],int arrayLenght,int value);

/**
 * \brief Busca la primer ocurrencia de un producto mediante su codigo
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param codigo Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
//int buscarPorCodigo(Product productArray[],int arrayLenght,int codigo);

/**
 * \brief Busca el primer lugar no utilizado en el array
 * \param productArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
 *
 */
//int lugarVacio(Product productArray[],int arrayLenght);

void harcodearAlumnos(eAlumnos lista[]);

void harcodearLocalidad(eLocalidad lista[]);

void mostrasLocalidad(eLocalidad lista[], int tam);

void mostrasAlumnos(eAlumnos lista[], int tam);

void MinAMaxNombreLocalidad(eLocalidad dato[]);

void MaxAMinNombreLocalidad(eLocalidad dato[]);

void MinAMaxNombreAlumno(eAlumnos dato[]);

void MaxAMinNombreAlumno(eAlumnos dato[]);

int NotasMayoresA5(eAlumnos dato[]);

int laMejorNota(eAlumnos dato[]);

void nombresNotaMasAlta(eAlumnos dato[], int laNota);

void ordenarLocalidadesConAlumnos(eAlumnos alumnos[], eLocalidad localidad[]);

void ordenarLocalidadesConAprobados(eAlumnos alumnos[], eLocalidad localidad[]);

void alumnosDeLaLocalidad(eAlumnos alumnos[], eLocalidad localidad[]);

void alumnosAprobadosQueNoVivenEn(eAlumnos alumnos[], eLocalidad localidad[]);

void localidadConMasAlumnos(eAlumnos alumnos[], eLocalidad localidad[]);
