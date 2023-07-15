#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("\n enter any character =");
    scanf("%c",&c);
    if((c>='a'&& c<='Z')||(c>'A'&& c<='Z'))
    {
        printf("%c is alphabet \n",c);
    }
    else if (c>='0'&&c<='9')
    {
        printf("%c is digit \n",c);
    }
    else
    {
        printf("%c is special character \n ", c);
    }
    getch();
    return 0;
}
