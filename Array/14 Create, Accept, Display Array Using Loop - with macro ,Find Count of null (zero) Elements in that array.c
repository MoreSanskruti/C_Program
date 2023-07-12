//Create, Accept, Display Array Using Loop - with macro ,Find Count of null(zero) Elements in that array.//
#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Arr[size] = {} , i = 0 , nullcnt = 0;

    printf("\n Accept The Array Element");

    for( i = 0 ; i < size ;i++)
    {
        printf("\n Enter %d Element Of Array =  ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n Display The Array element \n");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n The %d Array Element = %d ", i , Arr[i]);
    }
    printf("\n Press any key to continue !!!!");

    getch();
  printf("\n The Count Of Null Elements Of Array = ");

    for(i = 0 ; i < size ; i++)
    {
        if(Arr[i] == 0)
        {
            nullcnt++;
        }
    }
    printf("\n The Count Of Null Element In That Array Is = %d ",nullcnt);
    getch();
    return 0;
}
