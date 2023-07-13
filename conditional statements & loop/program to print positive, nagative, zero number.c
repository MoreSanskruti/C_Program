#include<stdio.h>
#include<conio.h>
int main()

{
    int n;
    printf("\n Enter any Number ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("\n The Given Number Is Positive");
    }
    else
    {
        printf("\n The Given Number Is Negative");
    }
    getch();
    return 0;
}
