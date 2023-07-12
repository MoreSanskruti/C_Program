//Create, Accept, Display Array Using Loop - with macro ,Find Summation of All Element in that array.//
#include<stdio.h>
#include<conio.h>
#define size 6

int main()
{
    int Arr[size] = {} , i = 0 ,Sum = 0;

    printf("\n Accept The Array Element ");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n Enter The %d Element = ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n Display The Array Element \n");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n The %d Element Of Array = %d ", i ,Arr[i]);
    }

    printf("\n The Summation Of All Element Array is = ");

    for(i = 0 ; i <size; i++)
    {
        Sum = Sum + Arr[i];
    }

    printf("\n the summation of all element Of array is = %d",Sum);
    printf("\n Thanks !!!!");
    getch();
    return 0;
}
