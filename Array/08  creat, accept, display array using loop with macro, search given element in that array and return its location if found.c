//creat, accept, display array using loop with macro, search given element in that array and return its location if found
#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{
    int Arr[size] = {} , i = 0 ,Src_Element = 0;

    printf("\n Accept the array element" );

    for( i = 0; i < size ;i++)
    {
        printf("\n Enter %d Element = ",i + 101 );
        scanf("%d",&Arr[i]);
    }

    printf("\n Display array elements ");

    for(i = 0 ;  i  < size ; i++)
    {
        printf("\n Enter %d Element = %d ",i +101,Arr[i]);
    }

     printf("\n Press any key to continue !!!!");
     getch();
     system("cls");

     printf("\n Search the element");

     printf("\n Enter a element for searching = ");
     scanf("%d",&Src_Element);

     for( i = 0 ; i < size ; i++)
     {
         if(Arr[i] == Src_Element)
         {
             break ;
         }
     }

     if( i < size)
         {
             printf("\n The Searching element %d is found in %d index ",Src_Element,i);
         }
        else
         {
             printf("\n The Searching  element %d is not found in given array ",Src_Element);
         }

    getch();
    return 0;
}
