#include<stdio.h>
#include<conio.h>

 int main()
{
    int i=0, j=0, x=0;
    printf("\n enter size=");
    scanf("%d",&x);

    printf("\n\n pattern is => \n\n");
    for (i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i>=j)
            {
                printf(" Q ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n thanks");
    getch();
    return 0;
}
