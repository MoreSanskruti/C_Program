#include<stdio.h>
#include<conio.h>

int find_Max(int,int);

int main()
{
    int N1 =0, N2 =0, Max =0;

    printf("\n Enter two No's=");
    scanf("%d%d",&N1,&N2);

    Max = find_Max(N1,N2);

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
   int find_Max (int Num1,int Num2)
   {
       int Ret=0;

       if(Num1 < 0 || Num2 < 0)
       {
        Ret = -2;
       }
       else if(Num1 == Num2)
       {
           Ret = -1;
       }
       else if(Num1>Num2)
       {
           Ret =Num1;
       }
       else
       {
           Ret =Num2;
       }
       return Ret;
   }


