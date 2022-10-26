#include <stdio.h>

int main()
{
    float divi;
    float div(float a, float b)
    {
    return (a / b);
    }
    float tonelada = 35273.92;
    float n;

    printf("peso del cereal\n");
    scanf("%f", &n);

    divi=div(n,tonelada);
    printf("El peso en tonelada metrica es: %f\n", divi);

    divi=div(tonelada,n);
    printf("cantidad de cajas para llenar una tonelada: %f\n", divi);

    return(0);
}
