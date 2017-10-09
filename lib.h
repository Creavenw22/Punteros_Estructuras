#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


typedef struct
{
    int dni;
    char nombre[100];
    float altura;
}ePersona;


/** \brief Contruye una persona a partir de los datos generados en el alta
 * \param Request: Un puntero a persona
 * \param Request: Un entero (Dni)
 * \param Request: Un string (Nombre)
 * \param Request: Un float (altura)
 */
void new_Persona(ePersona*,int dni, char nombre[],float altura);

/** \brief Pide los datos para construir una persona
 * \param
 * \param
 * \return 1: Si se ralizo la contruccion. 0: Si no re se realizo.
 */
int Alta_persona(ePersona*);

void mostrar(char*, int);

void ordenar(char*, int);

void swap(char*, char*);

/**\brief Muestra la persona de forma ordenada
 * \param Request: un puntero a estructura persona
 */
void personaToString(ePersona*);
