#include<stdio.h>

int main()
{
    int n1,n2,r;
    printf("\n Enter Two Numbers:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    r=n1*n2;
    printf("mult=%d",r);

    printf("\n Enter Two Numbers:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    r=n1+n2;
    printf("Add=%d",r);

    printf("\n Enter Two Numbers:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    r=n1-n2;
    printf("sub=%d",r);

    printf("\n Enter Two Numbers:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    r=n1/n2;
    printf("Div=%d",r);

    return 0;
}
