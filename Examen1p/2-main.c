#include <stdio.h>

int main()
{

float pago = 16.78;
float extras = 25.17;
float mult;
float mul(float a, float b)
{
    return (a * b);
}
float suma;
float add(float a, float b)
{
    return (a + b);
}
float rest;
float resta(float a, float b)
{
    float k = a - b;
    printf("k: $%f\n", k);
    return (a - b);
}
float n;
float horas = 0;
float horasE = 0;
float pagoT = 0;
float ss = 0.06;
float impuestof = 0.14;
float impuestoE = 0.05;
float sindicato = 0.1;
float SalarioNeto = 0;
float dependientes;
float ne;
float net;
float neto;
float Sneto;
float social;
float estatal;
float federal;
float sindi;


printf("Horas trabajadas\n");
scanf("%f", &n);

mult=mul(40,pago);

if (n>40)
{

    horasE = (n - 40) * extras;
    pagoT = (horas + horasE);

}

suma= add(mult,pagoT);
printf("El pago bruto es: $%f\n", suma);

social=mul(suma,ss);
printf("El impuesto del seguro social es : $%f\n", social );

federal=mul(suma,impuestof);
printf("El impuesto federal es : $%f\n", federal );

estatal=mul(suma,impuestoE);
printf("El impuesto estatal es : $%f\n", estatal );

sindi=mul(suma,sindicato);
printf("Pagos al sindicato : $%f\n", sindi );

printf("¿Cuantos dependientes tiene?\n");
scanf("%f", &dependientes);

if (dependientes>=3)
{
    printf("costo del seguro de salud es : $35\n");
}

ne = resta(suma,social);
net = resta(ne,federal);
neto = resta(net,estatal);
Sneto = resta(neto,sindi);

if (dependientes>=3)
{
    SalarioNeto = resta(Sneto,35);
    printf("El salario neto es : $%f\n", SalarioNeto);
}
if (dependientes<3)
{
    printf("El salario neto es : $%f\n", Sneto);
}

}
