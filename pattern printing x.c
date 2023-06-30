#include<stdio.h>
#include<conio.h>

int main()
{
 int i=0,j=0,x=0;

printf("\n enter row size & column size :");
scanf("%d",&x);

printf("\n pattern is => \n");

for( i=1; i<=x; i++)
{
    for(j=1; j<=x; j++)
    {
        if (i==j || i+j == x+1 )
        {
            printf("*");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
}
printf(" \n\n thanks");
getch();
return 0;
}
