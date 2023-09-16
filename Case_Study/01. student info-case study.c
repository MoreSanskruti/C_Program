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
     struct stud std;

     std.Roll_No =15;
     strcpy(std.Name,"Raj Patil");
     std.Phy =83;
     std.Chem =78;
     std.Maths =89;

     std.Total = std.Phy + std.Chem + std.Maths;

     std.Per = (std.Total/300)*100;

     printf("\n Roll Number =%d",std.Roll_No);
     printf("\n Name =%s",std.Name);
     printf("\n Total Marks =%0.0f",std.Total);
     printf("\n Percentage =%0.3f",std.Per);

     printf("\n\n Thanks for using our Application!!!!!!");

     getch();
     return 0;
 }


