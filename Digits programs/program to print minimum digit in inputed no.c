#include<stdio.h>
#include<conio.h>
int main()

{
    int No = 0, Temp = 0, Dig = 0, Min = 0;

    printf("\n Enter a Positive No :");
    scanf("%d",&No);
    Temp=No;

    Min= Temp%10;

    while(Temp>0)
      {
        Dig=Temp%10;
        if(Dig<Min)
        {
            Min=Dig;

        }
        Temp=Temp/10;
    }
    printf("\n Minimum number in %d is =%d",No,Min);
    getch();
    return 0;

}

