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
     int i=0;
     struct stud Std[3] ={};

     printf("\n Enter Student Details =>\n");

     for(i =0;i<3;i++)
     {
     printf("\n Enter Student Roll_Number :-");
     scanf("%d",&Std[i].Roll_No);

     fflush(stdin);

     printf("\n Enter Student Name :-");
     gets(Std[i].Name);

     printf("\n Enter Physics Marks :-");
     scanf("%d",&Std[i].Phy);

     printf("\n Enter Chemistry Marks :-");
     scanf("%d",&Std[i].Chem);

     printf("\n Enter Mathematics Marks :-");
     scanf("%d",&Std[i].Maths);

     Std[i].Total = Std[i].Phy + Std[i].Chem + Std[i].Maths;

     Std[i].Per = (Std[i].Total/300)*100;

     }

     printf("\n Enter Any Key to Go Ahead");
     getch();

     printf("\n\n Entered students Details Are :-\n\n");

     for(i=0;i<3;i++)
     {

     printf("\n=========================*******======================");

     printf("\n\n\t Roll Number       =%d",Std[i].Roll_No);
     printf("\n\n\t Student Name      =%s",Std[i].Name);
     printf("\n\n\t Physics Marks     =%d",Std[i].Phy);
     printf("\n\n\t Chemistry Marks   =%d",Std[i].Chem);
     printf("\n\n\t Mathematics Marks =%d",Std[i].Chem);
     printf("\n\n\t Total Marks       =%0.0f",Std[i].Total);
     printf("\n\n\t Percentage        =%0.3f",Std[i].Per);

     printf("\n=========================*******======================");
     }
     printf("\n\n Thanks for using our Application!!!!!!");


     getch();
     return 0;
 }



