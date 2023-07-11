//Create Array of 7 Elements With Null(0) Initialization, Accept & Display All Elements With Loop //

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {} , i = 0;

   printf("\n Accept the elements \n");

   for( i = 0 ; i < 7 ;i++)
   {
       printf("\n Enter the %d element = ",i +101);
       scanf("%d",&Arr[i]);
   }

    printf("\n Press any key to continue!!!!");

    getch();

    system("cls");

    printf("\n Display All The Elements \n");

    for(i = 0 ; i < 7 ;i++)
    {
        printf("\n Enter The %d element = %d ", i +101 ,Arr[i]);
    }
    getch();
    return 0;
}
