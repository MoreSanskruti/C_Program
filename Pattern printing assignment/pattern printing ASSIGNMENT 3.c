#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    char ch='A';

    printf("\n\n=============*********============\n\n");
    for( i=0;i<=4;i++)
    {
        for(j=0; j<=i;j++)
        {

          printf("%c",ch);
          ch++;
        }
        ch='A';

         printf("\n");

    }
    printf("\n\n============**********============\n\n");
    getch();
    return 0;
}
