 #include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,x=0,a='\0';
    printf("\n Enter size for pattern :");
    scanf("%d",&x);
    printf("=============pattern========\n");

    for (r=1, a='A';r<=x;r++)
    {
        for(c=1;c<=x;c++,a++)
        {
            if(r>=c)
            {
                printf(" %c ",a);
            }
            else
                printf("    ");
        }
        printf("\n");
    }
    printf("\n==========thanks=============");
    getch();
    return 0;
}

