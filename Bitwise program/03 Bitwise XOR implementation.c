#include<stdio.h>
#include<conio.h>

int main()

  {
     int No1 =0, No2 =0, Res =0;

      printf("\n Enter 1st Number =");
      scanf("%d",&No1);
      printf("\n Enter 2st Number =");
      scanf("%d",&No2);

      printf("\n===========****=========\n");

      Res= No1 ^ No2;
      printf("\n Result=> %d ^ %d =%d.",No1,No2,Res);

      printf("\n============******===========\n");
      getch();
      return 0;

  }

