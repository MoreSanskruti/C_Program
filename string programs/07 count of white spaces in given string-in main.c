#include<stdio.h>
#include<conio.h>

int main()

{
     char cSrc[50]={'\0'};
     int Space_Cnt=0, i=0;

     printf("\n Enter a string:");
     gets(cSrc);


     while(cSrc[i]!='\0')
     {
         if(cSrc[i] == ' ')
         {
             Space_Cnt++;
         }
         i++;
     }
     printf("\n cont of a spaces in given string is=%d.",Space_Cnt);

     getch();
     return 0;
}

