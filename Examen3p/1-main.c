#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i;
int j;
int main()
{
    char conway[10][10];

    int num = rand () % 11;
    
    while(1==1)
    {
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<10;i++)
        {
            if (num % 2 ==0)
            {
                conway[i][j]='*';
            }
            else
            {
                conway[i][j]='-';
            } 
        } 
        printf("%c\n",conway[i][j]);
    }
    }
}
