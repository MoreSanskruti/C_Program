//Create, Accept, Display Array Using Loop - with macro ,Find Count of even&odd&zero Elements in that array//
#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Arr[size] = {} , i = 0 , Ecnt= 0,Ocnt=0,nullcnt = 0;

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
     printf("\n the count of even , odd , & null element is= ");
     for(i=0;i<size;i++)
      {
        if(Arr[i] == 0)
        {
            nullcnt++;
        }
        if(Arr[i] % 2 == 0)
        {
            Ecnt++;
        }
        if(Arr[i]%2==1)
        {
            Ocnt++;
        }
      }

      printf("\n the count of null element is =%d",nullcnt);
      printf("\n the count of even element is =%d",Ecnt);
      printf("\n the count of odd element is =%d",Ocnt);

      printf("\n thanks!!!");
      getch();
      return 0;
}

