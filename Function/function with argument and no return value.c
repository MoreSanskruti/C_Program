#include<stdio.h>
#include<conio.h>
void fun(int,int);

int main()
{
    int n1=5,n2=3;
    fun(n1,n2);
    getch();
    return 0;
}
void fun(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    printf("%d",sum);
}
