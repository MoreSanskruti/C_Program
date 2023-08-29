#include<stdio.h>
#include<conio.h>

int strlenX(char[]);

int main()
{
       char cSrc[20]={'\0'};
       int Len =0;

       printf("\n  Enter a string :");
       gets(cSrc);

       Len=strlenX(cSrc);

       printf("\n Length of given string is =%d",Len);

       getch();
       return 0;

}
int strlenX(char cArr[])

{
    int cnt= 0;

    printf("\n size =%d.\n",sizeof(cArr));

    while(cArr[cnt] !='\0')
    {
        cnt++;
    }
    return cnt;
}

