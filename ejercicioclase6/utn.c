#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 30

int validateANumber(char text[])
{
    int i = 0;
    while(text[i] !='\0')
    {
        if(text[i]<'0' || text[i]>'9')
        {
            return 0;
        }
        i++;
    }
    return 1;


}


int validateLetters(char text[])
{
    int i = 0;
    while(text[i] !='\0')
    {
        text[i] = tolower(text[i]);
        if(text[i]<'a' || (text[i]>'z' &&text[i]<'ü') || (text[i]> 'é' && text[i]< 'á') || text[i]>'Ñ')
        {
            return 0;
        }
        i++;
    }
    return 1;
}
