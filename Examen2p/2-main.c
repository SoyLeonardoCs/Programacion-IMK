#include <stdio.h>

int main()
{
    char s;
    float h;
    int m;
    int i=1;

    float mult;
    float mul(float a, float b)
    {
        return (a * b);
    }

    while(i==1)
    {

        printf("¿Dia de la semana? \n");
        printf("L,l - Lunes \n");
        printf("M,m - Martes \n");
        printf("X,x - Miercoles \n");
        printf("J,j - Jueves \n");
        printf("V,v - Viernes \n");
        printf("S,s - Sabado \n");
        printf("D,d - Domingo \n");
        scanf( " %c", &s);

        printf("¿Hora de la llamada en notación de 24 horas? \n ");
        scanf("%f", &h);

        printf("Ingrese la duración de la llamada en minutos: \n");
        scanf("%d", &m);

        switch(s)
        {
            case 'l':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'L':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'M':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'm':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'X':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'x':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'J':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'j':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'V':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'v':
            {
                if(h>=8 || h<=20)
                {
                    mult=mul(m,0.60);
                }
                if(h<8 || h>20)
                {
                    mult=mul(m,0.30);
                }
                printf("Costo de llamada : $%f\n", mult);
            }
            break;
            case 'S':
            {
                mult=mul(m,0.15);
                printf("Costo de llamada : $%f\n", mult);

            }   
            break;
            case 's':
            {
                mult=mul(m,0.15);
                printf("Costo de llamada : $%f\n", mult);

            }
            break;
            case 'D':
            {
                mult=mul(m,0.15);
                printf("Costo de llamada : $%f\n", mult);

            }
            break;
            case 'd':
            {
                mult=mul(m,0.15);
                printf("Costo de llamada : $%f\n", mult);

            }
            break;

        }
        printf("¿Quiere continuar?\n 1=si\n 2=no \n");
        scanf("%d", &i);
     }  
        
}
