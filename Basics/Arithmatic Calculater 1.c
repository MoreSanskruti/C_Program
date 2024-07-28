#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,Return=0;

    printf("\n Enter Two Numbers :\n");
    scanf("%d%d",&No1,&No2);
    Return=No1+No2;
    printf("Addition Of Two Number Is :%d \n\n",Return);
    getch();

    printf("\n Enter Two Numbers :\n");
    scanf("%d%d",&No1,&No2);
    Return=No1-No2;
    printf("Subtraction Of Two Number Is :%d\n\n",Return);
    getch();

    printf("\n Enter Two Numbers :\n");
    scanf("%d%d",&No1,&No2);
    Return=No1*No2;
    printf("Multiplication Of Two Number Is :%d\n\n",Return);
    getch();

    printf("\n Enter Two Numbers :\n");
    scanf("%d%d",&No1,&No2);
    Return=No1/No2;
    printf("Division Of Two Number Is :%d\n\n",Return);
    getch();
    return 0;
}
