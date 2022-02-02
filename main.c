#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int row, col, space, n;

    printf("Please Enter Pattern Value : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(space=1; space<=n-row; space++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }


    getch();
    return 0;
}
