#include <stdio.h>

int main ()
{
    int n, numeros;
    
    printf("Hasta que numero contar?\n");
    scanf("%d",&n);
    for(numeros = 1; numeros<=n; numeros++)
    {
        printf("%d\n",numeros);
    }
    return(0);
}
