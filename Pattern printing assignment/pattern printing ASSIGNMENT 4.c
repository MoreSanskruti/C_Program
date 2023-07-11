#include<stdio.h>
#include<conio.h>
  int main()
{


  int r=0,c=0,x=0 ,i=0,a='\0';

  printf("\n Enter size for pattern=>");
  scanf("%d",&x);

  printf("\n ================= pattern==============\n");
   for(r=1,a='A';r<=x;r++,a++)
   {
          for(c=1;c<=x;c++)
          {
              if(r>=c)
              {
                  printf("%c",a);

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



