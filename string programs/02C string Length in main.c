#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50]={'\0'};
    int Len = 0;

    printf("\n Enter  a  string :");
    gets(cSrc);

    for(Len = 0; cSrc[Len] !='\0';Len++);

    printf("\n Length of given string is =%d",Len);
    getch();
    return 0;
}


