#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name [20] ="Unknown";
    char FNm[20] ="Jack Fruit";

    printf("\n Name String Value = %s.", Name);
    printf("\n FNm String Value =%s.", FNm);

    getch();

    strcpy(Name,"Harry");
    printf("\n New Name String value =%s.",Name);

    getch();

    strcpy(Name, FNm);
    printf("\n Updated Name String Value =%s.",Name);


    getch();
    return 0;
}
