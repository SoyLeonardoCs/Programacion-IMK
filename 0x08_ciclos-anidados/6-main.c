#include <stdio.h>

int main()
{
int n;
int j, i;
printf("Ingrese el numero de filas:\n");
scanf("%d", &n);

for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < i + 1; j++)
        printf(" ");
        printf("\n");
    }
    for (i = 1; i < n; i++) 
    { 
        for (j = i; j < n; j++) 
        printf(" ");
        printf("\n");
    } 
}
