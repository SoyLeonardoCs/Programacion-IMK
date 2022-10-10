#include <stdio.h>

int main ()
{
    int n, numeros;
    
    printf("Desde que numero empieza\n");
    scanf("%d",&n);
    for(numeros = n; numeros>=1; numeros--)
    {
        printf("%d\n ",numeros);
    }
    return(0);
}
