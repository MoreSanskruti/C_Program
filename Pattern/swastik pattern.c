#include<stdio.h>
#include<conio.h>

int main()
{
    int n=7;
    int mid =n/2+1;
    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==mid || j==mid || ( i==1 && j>=mid) || (j==1 && i<=mid) || (i==n && j<=mid) ||(j==n && i>=mid) )

                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
