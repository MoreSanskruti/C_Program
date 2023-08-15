#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0, Dig=0, Temp=0, dsum=0;

    printf("\n enter a positive number:");
    scanf("%d",&No);

    Temp= No;

    while( Temp > 0)
    {
        Dig  = Temp % 10;
        dsum = dsum + Dig;
        Temp = Temp / 10;

    }

    printf("\n Digits sum of %d is = %d.",No,dsum);

    getch();
    return 0;
}

