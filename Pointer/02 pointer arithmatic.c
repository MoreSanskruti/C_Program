#include<stdio.h>
#include<conio.h>

int Add()
{
    int N1=0,N2=0;
    printf("\n Enter No1 =");
    scanf("%d",&N1);
    printf("\n Enter No2 =");
    scanf("%d",&N2);
    return (N1+N2);
}
int main()
{
    int Res =0;
    Res =Add();
    printf("\n Addition is=%d",Res);

    printf("\n thanks");

    getch();
    return 0;
}
