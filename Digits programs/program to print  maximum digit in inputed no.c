#include<stdio.h>
#include<conio.h>
int main()

{
    int No = 0, Temp = 0, Dig = 0, Max = 0;

    printf("\n Enter a Positive No :");
    scanf("%d",&No);
    Temp=No;

   // Max= Temp%10;//

    while(Temp>0)
      {
        Dig=Temp%10;
        if(Dig>Max)
        {
            Max=Dig;

        }
        Temp=Temp/10;
    }
    printf("\n Maximum number in %d is =%d",No,Max);
    getch();
    return 0;

}


