#include<stdio.h>
#include<conio.h>

void Add();
int main()
{
    printf("\n main Welcome You ");

    Add();
    getch();
    return 0;
}
void Add()
{
    int n1=0, n2=0, sum=0;

    printf("\n Enter no1= ");
    scanf("%d",&n1);
    printf("\n Enter no2= ");
    scanf("%d",&n2);

    sum=n1+n2;
    printf("\n Addition of %d And %d is=%d.",n1,n2,sum);
    return;
}

