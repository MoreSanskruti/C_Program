#include<stdio.h>
#include<conio.h>
int main()

{
    int No = 0, Temp = 0, Dig = 0, Odd = 0;

    printf("\n Enter Positive No :");
    scanf("%d",&No);
    Temp=No;

    while(Temp>0)

    {
        Dig=Temp%10;
        if(Dig%2==1)
        {
            Odd++;

        }
        Temp=Temp/10;
    }
    printf("\n count of Odd digit in %d is =%d",No,Odd);
    getch();
    return 0;

}

