#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0, j=0, r=0,c=0;
printf("enter row value:");
scanf("%d",&r);
printf("enter column value:");
scanf("%d",&c);
printf("===========*********==========");
for(i=1;i<=r;i++)
{
    for (j=1;j<=c;j++)
    {
        printf("*");
    }
    printf("\n");
}
printf("\n===========*********=========");
getch();
return 0;
}
