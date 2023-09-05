#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    printf("***********************");
    printf("\n\n\t");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c",j+64);
        }
        printf("\n\n\t");
    }
    printf("\b\b\b\b\b\b\b************************");
    getch();
    return 0;

}
