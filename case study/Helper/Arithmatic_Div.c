#include<stdio.h>
#include<conio.h>

 int Division()
 {
     int N1,N2,DIV;

     printf("\n Enter Any Number:");
     scanf("%d",&N1);

     printf("\n Enter Any Number:");
     scanf("%d",&N2);

     DIV = N1/N2;

     printf("\n %d/%d=%d",N1,N2,DIV);

     getch();
     return 0;
 }

