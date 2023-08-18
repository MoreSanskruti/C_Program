#include<stdio.h>
#include<conio.h>

int main()

{
     char cSrc[20]={'\0'};
     int D_Cnt=0,i=0;

     printf("\n Enter a string:");
     gets(cSrc);


     while(cSrc[i]!='\0')
     {
         if(cSrc[i] >= '0' && cSrc[i]<='9')
         {
             D_Cnt++;
         }
         i++;
     }
     printf("\n cont of a Digits in given string is=%d.",D_Cnt);

     getch();
     return 0;
}



