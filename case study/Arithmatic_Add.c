#include<stdio.h>
#include<conio.h>

 int Add()
 {
     int N1,N2,SUM;

     printf("\n Enter Any Number:");
     scanf("%d",&N1);

     printf("\n Enter Any Number:");
     scanf("%d",&N2);

     SUM = N1+N2;

     printf("\n %d+%d=%d",N1,N2,SUM);

     getch();
     return 0;
 }
