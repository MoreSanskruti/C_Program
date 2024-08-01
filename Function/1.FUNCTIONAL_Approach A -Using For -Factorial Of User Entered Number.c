#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Temp=0, Fact=0;

    up:
            printf("\n Enter a Number :");
            scanf("%d",&No);

            if(No<=0)
            {
                 printf("\n Invalid Input");
                goto up;
            }
            for(Temp =  No,Fact=1;Temp>1;Temp--)
            {
                Fact=Fact*Temp;
            }
             printf("\nFactorial of %d is %d",No,Fact);
             printf("\n Thanks");

            getch();
            return 0;

}
