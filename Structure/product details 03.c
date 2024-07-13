#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Product
{
    int PID;
    char PName[20];
    float PPPrice;
    float PSPrice;
};

int main()
{
    struct Product pObj1;

    printf("\n ##### 1st Product Details Are  ##### \n");

    printf("\n Enter Product ID");
    scanf("%d",&pObj1.PID);
    fflush(stdin);

    printf("\n\n Enter Product Name  => ");
    gets(pObj1.PName);

    printf("\n\n Enter Product Purchase Price => ");
    scanf("%f",&pObj1.PPPrice);
    fflush(stdin);

    printf("\n\n Enter Product Sales Price => ");
    scanf("%f",&pObj1.PSPrice);



    printf("\n\n\t ##### 1ST Product Details Are #### \n\n");

    printf("\n\n Product ID is = %d.",pObj1.PID);

    printf("\n\n Product Name is =%s.",pObj1.PName);

    printf("\n\n Product Purchase Price is = %0.2f.",pObj1.PPPrice);

    printf("\n\n Product Sales Price is = %0.2f.",pObj1.PSPrice);



    getch();
    return 0;
}


