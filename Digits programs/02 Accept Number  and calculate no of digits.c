#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, dCnt = 0;

        printf("\n Enter a Positive Number = ");
        scanf("%d",&No);

        for(Temp = No; Temp > 0; Temp /= 10)
        {
            dCnt++;
        }

        printf("\n Digits Count in %d is = %d.", No, dCnt);

        getch();
        return 0;
}

