#include <stdio.h>

int main()
{
    int x = 0,y = 0;
    unsigned int columns = 0;
    unsigned int col = 0;
    
    printf("Enter the number of columns = ");
    scanf("%u",&columns);

    for(x=0; x < (columns*2) ; ++x)
    {
        // Print spaces
        for(y=0; y < col; ++y)
        {
            printf("*");
        }
        (x<columns)?(++col):(--col);
        
        // Print new line
        printf("\n");
    }
    return 0;
}
