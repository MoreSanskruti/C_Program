 #include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("\n enter an number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is even",num);
    else
        printf("%dis odd",num);
    getch();
    return 0;
}
