#include "lib.h"



int main()
{
    ePersona listaPersonas[5];
    int i;
    int dni;
    char nombre[50];
    float altura;

    for(i=0; i<5; i++)
    {
        /*printf("Ingrese el dni: ");
        scanf("%d", &dni);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombre);
        printf("Ingrese la altura: ");
        scanf("%f", &altura);*/


      /*  if(new_Persona(listaPersonas+i, dni, nombre, altura))
        {
            printf("Persona generada con exito!!!");
        }
        else
        {
            printf("Carga fallida");
        }*/


    }
    printf("**************LISTA DE PERSONAS****************");
    for(i=0; i<5; i++)
    {
        personaToString(listaPersonas+i);
    }


    return 0;
}


