//Accept a Number From User And Print its Reverce Table//

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Number To Print its Reverce Table = ");
    scanf("%d",&No);

    i = 10;

    while(i >= 1 )
    {
        printf("\n %d",(i * No));
        i--;
    }

    printf("\n Thanks !!!");

    getch();
    return 0;
}
