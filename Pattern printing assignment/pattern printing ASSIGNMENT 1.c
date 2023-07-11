#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    char ch='A';

     printf("\n\n===========**********=========\n\n");

    for( i=1;i<=5;i++)
    {
        for(j=1; j<=i;j++)
        {

          printf(" %c ",ch);
          ch++;
        }
         printf("\n");

    }
    printf("\n============**********============\n");
    getch();
    return 0;
}
