#include<stdio.h>
#include<conio.h>

 int subtract()
 {
     int N1,N2,SUB;

     printf("\n Enter Any Number:");
     scanf("%d",&N1);

     printf("\n Enter Any Number:");
     scanf("%d",&N2);

     SUB = N1-N2;

     printf("\n %d-%d=%d",N1,N2,SUB);

     getch();
     return 0;
 }

