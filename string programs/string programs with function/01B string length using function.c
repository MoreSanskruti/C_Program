#include<stdio.h>
#include<conio.h>
int strlenX(char *);

int main()
{
    char cSrc[20]={'\0'};

    puts("\n Enter A string :");
    gets(cSrc);

    printf("\n Length Of Given String Is :%d",strlenX(cSrc));

    getch();
    return 0;
}
int strlenX(char *cPtr)
{
    int Cnt =0;
    for(Cnt=0;cPtr[Cnt] !='\0';Cnt++);
    return Cnt;
}
