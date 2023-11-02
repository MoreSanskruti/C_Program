#include<stdio.h>
#include<conio.h>
int fun(int,int);

int main()
{
    int n1=5,n2=3,res;
    res=fun(n1,n2);
    printf("%d",res);
    getch();
    return 0;
}
int fun(int n1,int n2)
{
    return(n1+n2);
}
