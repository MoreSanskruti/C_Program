#include<stdio.h>
#include<conio.h>
int main()

{
    int No = 0, Temp = 0, Dig = 0, Even = 0;

    printf("\n Enter Positive No :");
    scanf("%d",&No);
    Temp=No;

    while(Temp>0)

    {
        Dig=Temp%10;
        if(Dig%2==0)
        {
            Even++;

        }
        Temp=Temp/10;
    }
    printf("\n count of Even digit in %d is =%d",No,Even);
    getch();
    return 0;

}
