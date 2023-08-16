#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
    char Name[20] ="Unknown";
    char FNm[20] ="Jack Fruit";

    printf("\n String1 value =%s.",Name);
    printf("\n string2 value =%s.",FNm);

    printf("\n Enter Your Name =");
    gets(Name);

    printf("\n Enter Favorite Fruit =");
    gets(FNm);

    printf("\n Name Entered is  = %s.",Name);
    printf("\n Favorite Fruit Name = %s.",FNm);

    getch();
    return 0;


}
