#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define MAX 40
int main()
{
    char userNumber[MAX];
    char userLetters[MAX];
    printf("Ingrese un numero: ");
    fflush(stdin);
    scanf("%s", userNumber);

    if(validateANumber(userNumber))
    {
        printf("Es un numero\n");
    }
    else
    {
        printf("No es un numero\n");
    }

    printf("Ingrese una palabra: ");
    fflush(stdin);
    scanf("%s", userLetters);

    if(validateLetters(userLetters))
    {
        printf("Tiene letras solamente");
    }
    else
    {
        printf("No tiene letras solamente");
    }

    return 0;
}
