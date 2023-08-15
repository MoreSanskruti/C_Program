#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Cnt7 = 0;

        printf("\n Enter a Positive Number = ");
        scanf("%d",&No);

        for(Temp = No; Temp > 0; Temp /= 10)
        {
            if( (Temp % 10) == 7 )
            {
                Cnt7++;
            }
        }

        printf("\n 7 Digit Count in %d is = %d.", No, Cnt7);

        getch();
        return 0;
}

