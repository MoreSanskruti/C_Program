#include<stdio.h>
#include<conio.h>

void Table(int);
int main()
{
    int No=0;


    printf("\n Enter No to print its Table =");
    scanf("%d",&No);
    Table (No);
    printf("\n Thanks");
    getch();
    return 0;
}
void Table (int Num)
{
    int i=0;
    printf("\n\nTable for %d is=>\n",Num);
       for(i=1; i<=10; i++)
         {
             printf("\n\t %3d",i*Num);
         }
    return;
}
