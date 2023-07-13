#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\n enter any two numbers ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is maximum ",a );
    }
    if(b>a)
    {
        printf("%d is maximum",b);
    }
    if (a==b)
    {
        printf("\n both are equal");
    }
    getch();
    return 0;
}
