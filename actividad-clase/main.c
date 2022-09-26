#include <stdio.h>
#include "main.h"


int main()
{
    float n1;
    float n2;

    
    float suma;
    float add(float a, float b)
{
    return (a + b);
}

    float rest;
    float resta(float a, float b)
{
    return (a - b);
}
    float mult;
    float mul(float a, float b)
{
    return (a * b);
}
    float divi;
    float div(float a, float b)
{
    return (a / b);
}
    float modulo;
    float mod(int a, int b)
{
    return (a % b);
}

    char opcion;

    printf("Elija la opcion de preferencia: \n");
    printf("a - Suma \n");
    printf("b - Resta \n");
    printf("c - Multiplicacion \n");
    printf("d - Division \n");
    printf("e - Mod \n");
    scanf("%c",&opcion);

    printf("Ingrese un numero:\n");
    scanf("%f",&n1);
    
    printf("Ingrese un numero:\n");
    scanf("%f",&n2);

    switch(opcion)
    {
        case 'a':
       suma= add(n1,n2);
        printf("El valor de la suma es: %f\n", suma);
        return 0;
        break;
        case 'b':
        rest= resta(n1,n2);
        printf("El valor de la resta es: %f\n", rest);
        return 0;
        break;
        case 'c':
        mult=mul(n1,n2);
        printf("El resultado de la multiplicacion es: %f\n",mult);
        return 0;
        break;
        case 'd':
        divi=div(n1,n2);
        printf("El resultado de la division es: %f\n",divi);
        return 0;
        break;
        case 'e':
        modulo=mod(n1,n2);
        printf("El módulo %f de %f es: %f\n",n1,n2,modulo);
        return 0;

    }

}
