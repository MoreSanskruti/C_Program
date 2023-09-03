#include<stdio.h>
#include<conio.h>

 int  Modulo()
 {
     int N1,N2,MODULO;

     printf("\n Enter Any Number:");
     scanf("%d",&N1);

     printf("\n Enter Any Number:");
     scanf("%d",&N2);

     MODULO = N1 % N2;

     printf("\n %d%%%d=%d",N1,N2,MODULO);

     getch();
     return 0;
 }

