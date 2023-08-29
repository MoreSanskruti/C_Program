#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int strlenX(char *);

int main()
{
    char cSrc[20]={'\0'};
    int Len =0;

    puts("\n Enter A string :");
    gets(cSrc);
    Len = strlenX(cSrc);

    system("cls");

    printf("\n Length Of Given String Is :%d",Len);

    getch();
    return 0;
}
int strlenX(char cPtr[])
{

    return printf("%s",cPtr);
}

