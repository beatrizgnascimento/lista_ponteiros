#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char frase[80];
    char *p = NULL;
    int i;
    
    scanf(" %[^\n]", frase);
    
    p = frase;
    
    while(*p != '\0')
    {
        p++;
    }
    
    for(i = strlen(frase); i >= 0; i--) //enquanto o ponteiro nao atingir o inicio da frase
    {
        *p = toupper(*p);
        printf(" %c", *p);
        p--;
    }
    

    return 0;
}
