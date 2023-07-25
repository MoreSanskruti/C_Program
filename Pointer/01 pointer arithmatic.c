#include<stdio.h>
#include<conio.h>
 int Add(int x,int y)
 {
     int sum =0;
     sum=x+y;
     return sum;
 }
 int main()
 {
     int n1=0, n2=0, Res=0;
     printf("\n Enter no1=");
     scanf("%d",&n1);
     printf("\n enter no2=");
     scanf("%d",&n2);

     Res=Add(n1,n2);
     printf("\n Addition of %d&%d is %d.",n1,n2,Res);

     printf("\n thanks");

     getch();
     return 0;
 }
