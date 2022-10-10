#include <stdio.h>
#include "main.h"

//2 3
int potencia(int base, int exp)
{
    int pot = 1;
        for(int i = 1; i<=exp;i++)
        {
            pot = pot * base;
        }
        return(pot);
}
