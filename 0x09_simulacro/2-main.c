#include <math.h>
#include <stdio.h>

int main(void)
{
    float a;
    float b;
    float c;
    float s;
    float area;
    float perimetro;
    float perimetro2;
    printf("Ingrese la longitud de un lado del triangulo:\n");
    scanf("%f",&a);
    
    printf("Ingrese la longitud de otro lado del trangulo:\n");
    scanf("%f",&b);

    printf("Ingrese la longitud de otro lado del trangulo:\n");
    scanf("%f",&c);

    if(a+b>c && a+c>b && b+c>a){
        perimetro = (a+b+c);
        perimetro2 = (perimetro/2);
        printf("El perimetro del triangulo es: %f\n", perimetro);
        area = sqrt(perimetro2*(perimetro2-a)*(perimetro2-b)*(perimetro2-c));
        printf("El area del triangulo es: %f\n",area);
    }else{
        printf("Las longitudes no son validas\n");
    }
     
}