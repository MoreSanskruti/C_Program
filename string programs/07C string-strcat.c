#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FirstName [20] ="";
    char LastName [20]="";
    char MiddleName[20]="";
    char Name [60]="";

    printf("\n Enter First Name = ");
    gets( FirstName);
    printf("\n Enter Middle Name = ");
    gets( MiddleName);
    printf("\n Enter Last Name= ");
    gets(LastName);

    getch();

    strcat( Name,FirstName);
    strcat( Name," ");
    strcat( Name,MiddleName);
    strcat( Name," ");
    strcat( Name,LastName);

    printf("\n\n =================**********===============");

    printf("\n\n First Name is  = %s.",FirstName);
    printf("\n\n Middle Name is = %s.",MiddleName);
    printf("\n\n Last Name is   =%s.",LastName);
    printf("\n\n FullName Generated is =%s.",Name);

   printf("\n\n ====================*********================");

    getch();
    return 0;

}


