#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int Roll_No;                //4
    char Name[40];             //40
    int Phy;                    //4
    int Chem;                   //4
    int Maths;                 //4
    float Total;                //4
    float Per;                 //4
};
 int main()

 {
     struct stud Std;

     printf("\n Enter Student Details =>\n");

     printf("\n Enter Student Roll_Number :-");
     scanf("%d",&Std.Roll_No);

     fflush(stdin);

     printf("\n Enter Student Name :-");
     gets(Std.Name);

     printf("\n Enter Physics Marks :-");
     scanf("%d",&Std.Phy);

     printf("\n Enter Chemistry Marks :-");
     scanf("%d",&Std.Chem);

     printf("\n Enter Mathematics Marks :-");
     scanf("%d",&Std.Maths);

     Std.Total = Std.Phy + Std.Chem + Std.Maths;

     Std.Per = (Std.Total/300)*100;

     printf("\n Enter Any Key to Go Ahead");
     getch();

     printf("\n=========================*******======================");

     printf("\n\n Entered students Details Are :-\n\n");

     printf("\n\n\t Roll Number       =%d",Std.Roll_No);
     printf("\n\n\t Student Name      =%s",Std.Name);
     printf("\n\n\t Physics Marks     =%d",Std.Phy);
     printf("\n\n\t Chemistry Marks   =%d",Std.Chem);
     printf("\n\n\t Mathematics Marks =%d",Std.Chem);
     printf("\n\n\t Total Marks       =%0.0f",Std.Total);
     printf("\n\n\t Percentage        =%0.3f",Std.Per);

     printf("\n=========================*******======================");

     printf("\n\n Thanks for using our Application!!!!!!");

     getch();
     return 0;
 }


