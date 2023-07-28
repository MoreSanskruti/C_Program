#include<stdio.h>
#include<conio.h>

void find_Max(int*,int*,int*);

int main()
{
    int N1 =0, N2 =0, Max =0;

    printf("\n Enter two No's=");
    scanf("%d%d",&N1,&N2);

    find_Max(&N1,&N2,&Max);

    if(Max == -2)
    {
        printf("Invalid");
    }
    else if (Max == -1)
    {
        printf("Equal");
    }
    else
    {
        printf("\n Maximum is =%d",Max);
    }
    getch();
    return 0;
}
   void find_Max (int*p1,int*p2,int*p3)
   {
       if(*p1 < 0 || *p2 < 0)
       {
        *p3 = -2;
       }
       else if(*p1 == *p2)
       {
           *p3 = -1;
       }
       else if(*p1>*p2)
       {
           *p3 =*p1;
       }
       else
       {
           *p3 =*p2;
       }

   }


