/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///   Arithmetic Calculator -Case study

///   Arithmetic operators Use  as console based Calculator

///   Input => Two Integral Number
///   Output => Arithmetic Result of user choice i.e Addition or  subtraction or multiplication or division or remainder
///
///   Author => Fork Infosystems
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>

 #include"Arithmatic_Add.c"
 #include"Arithmatic_Sub.c"
 #include"Arithmatic_Mult.c"
 #include"Arithmatic_Div.c"
 #include"Arithmatic_Modulo.c"


 int main()
 {
     int Choice = 0;
     char ch ='\0';

     for(;;)
     {
         printf("\n ********************fORK INFOSYSTEMS***************************\n\t ARITHMETIC CALCULATOR\n");
         printf("\n ======================================================================================================\n");
         printf("\n Choice => \n\t 1. Addition \n\t 2.Subtraction \n\t 3.Multiplication \n\t 4.Division \n\t 5.Remainder \n\t 6.Exit\n ");
         printf("\n=======================================================================================================\n");


     printf("\n Enter Your Choice = ");
     scanf("%d",&Choice);


     switch(Choice)
        {


          case 1:
                Add();
                getch();
                system("cls");
                break;

           case 2:
                subtract();
                getch();
                system("cls");
                break;

          case 3:
                Multiply();
                getch();
                system("cls");
                break;

         case 4:
                Division();
                getch();
                system("cls");
                break;

          case 5:
                Modulo();
                getch();
                system("cls");
                break;

          case 6:

                fflush(stdin);
                printf("\n Are  you sure do you want to Exit ??? (yes/no ): ");
                ch = getchar();

                if(ch=='y'|| ch == 'Y')
                {
                   goto Dwn;
                }

                fflush(stdin);
                system("cls");
                break;

     }

     }
     Dwn:


     printf("\n\n **** Thanks for using FORK INFOSYSTEMS Calculator Service*********");
     printf("\n Press  Any Key To Exit Application !!!!!\n ");

   getch();
   return 0;
 }

