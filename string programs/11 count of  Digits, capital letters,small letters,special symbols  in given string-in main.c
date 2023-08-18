#include<stdio.h>
#include<conio.h>

int main()

{
     char cSrc[50]={'\0'};
     int D_Cnt=0, Cap_Cnt=0,Small_Cnt=0,Sp_Cnt=0 ,i=0;

     printf("\n Enter a string:");
     gets(cSrc);


     while(cSrc[i]!='\0')
     {
         if(cSrc[i] >= '0' && cSrc[i]<='9')
         {
             D_Cnt++;
         }

         else if(cSrc[i] >= 'A' && cSrc[i]<='Z')
         {
             Cap_Cnt++;
         }

         else if(cSrc[i] >= 'a' && cSrc[i]<='z')
         {
             Small_Cnt++;
         }

         else
         {
             Sp_Cnt++;
         }
         i++;
     }
          printf("\n cont of a Digits in given string is         =%d.",D_Cnt);
          printf("\n cont of a capital letters in given string is=%d.",Cap_Cnt);
          printf("\n cont of a Small letters in given string is  =%d.",Small_Cnt);
          printf("\n cont of a Special symbols in given string is=%d.",Sp_Cnt);


     getch();
     return 0;
}




