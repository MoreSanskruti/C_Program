#include<stdio.h>

int mult(int a,int b)
{
    return a*b;
}
int add(int a,int b)
{
    return a+b;
}
int Sub(int a,int b)
{
    return a-b;
}
int Div(int a,int b)
{
    return a/b;
}
void main()
{
    printf("\n\n*****************\n\n");
    printf(" Multiplication is %d \n",mult(5,10));
    printf(" sum is %d \n",add(10,10));
    printf(" Subtraction is %d \n",Sub(20,15));
    printf(" Division is %d \n",Div(50,2));
    printf("\n\n*****************\n\n");

}

