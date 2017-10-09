#include "lib.h"

int cargar(char* letras, int t)
{
    int i;
    int retorno = 0;
    if(letras!=NULL)
    {
        for(i=0; i<t; i++)
        {
            printf("Ingrese una letra:" );
            fflush(stdin);
            scanf("%c", letras+i);
        }
        retorno=1;
    }

    return retorno;

}
void mostrar(char* letras, int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        printf("%c", *(letras+i));
    }
}
void ordenar(char* letras, int t)
{
    char auxChar;
    int i,j;
    for(i=0; i<t-1; i++)
    {
        for(j=i+1; j<t; j++)
        {
            if(*(letras+i)>*(letras+j))
            {
                swap(letras+i, letras+j);
            }
        }
    }
}

void swap(char* letra1, char* letra2)
{
    char auxChar;
    auxChar = *letra1;
    *letra1 = *letra2;
    *letra2 = auxChar;
}

void personaToString(ePersona* miPersona)
{
    printf("%d--%s--%.2f\n",  miPersona->dni,  miPersona->nombre,  miPersona->altura);
}
