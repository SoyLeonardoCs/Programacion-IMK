#include <stdio.h>

int main()
{
    int N;
    int i;
    int j;
    printf("Ingrese el numero de filas:\n");
    scanf("%d", &N);

    for(i=1; i<=N+1; i++)
    {
        
         for(j=i; j<=N; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-3); j++)
        {
            printf("*");
        }

        for(j=i; j<=N; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
