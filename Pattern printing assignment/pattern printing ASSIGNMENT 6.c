#include<stdio.h>
#include<conio.h>
  int main()
{


  int r=0,c=0,x=0 ,i=0;

  printf("\n Enter size for pattern=>");
  scanf("%d",&x);

  printf("\n ================= pattern==============\n");
   for(r=1,i=1;r<=x;r++)
   {
          for(c=1;c<=x;c++)
          {
              if(r>=c)
              {
                  printf("%-3d",i);
                  i++;
              }
              else
                printf("    ");
          }
          printf("\n");
   }
   printf("\n============================================\n");

   getch();
   return 0;

}



