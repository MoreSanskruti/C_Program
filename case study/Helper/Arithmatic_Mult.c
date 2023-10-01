#include<stdio.h>
#include<conio.h>

 int Multiply()
 {
     int N1,N2,MULT;

     printf("\n Enter Any Number:");
     scanf("%d",&N1);

     printf("\n Enter Any Number:");
     scanf("%d",&N2);

     MULT = N1*N2;

     printf("\n %d*%d=%d",N1,N2,MULT);

     getch();
     return 0;
 }

