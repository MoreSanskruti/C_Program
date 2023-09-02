#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    int Bill_cnt =0;
    int *Bill_Ptr = NULL;

    printf("\n Enter How Many Bills :");
    scanf("%d",&Bill_cnt);

    Bill_Ptr=(int*) malloc(Bill_cnt*sizeof(int));

    if(Bill_Ptr==NULL)
    {
        printf("\n malloc failed");
        return -1;
    }
    getch();
    return 0;
}
