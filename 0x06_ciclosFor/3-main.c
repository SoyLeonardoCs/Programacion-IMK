#include <stdio.h>

int main ()
{
     char letra;
    printf("Las letras del alfabeto son:");
    for(letra = 'a'; letra<='z'; letra++)
    {
        printf("%c\n ",letra);
    }
    return(0);
}
