#include<stdio.h>
#include<conio.h>

int main()

{
     char cSrc[20]={'\0'};
     int Cap_Cnt=0,i=0;

     printf("\n Enter a string:");
     gets(cSrc);


     while(cSrc[i]!='\0')
     {
         if(cSrc[i] >= 'A' && cSrc[i]<='Z')
         {
             Cap_Cnt++;
         }
         i++;
     }
     printf("\n cont of a capital letters in given string is=%d.",Cap_Cnt);

     getch();
     return 0;
}

