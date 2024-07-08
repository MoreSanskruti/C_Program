#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;
    printf("\nEnter Number:");
    scanf("%d",&Num);
    if(Num>0)
    {
        printf("\n %d is Positive number",Num);
    }
    else
    {
        printf("\n %d is Negative number",Num);
    }
    getch();
    return 0;
}
