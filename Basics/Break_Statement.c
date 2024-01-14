#include<stdio.h>

void main()
{
    int i,a,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("\n Enter A Number:");
        scanf("%d",&a);
        if(a<0)
        {
            break;
        }
        sum=sum+a;
    }
    printf("%d",sum);
}

