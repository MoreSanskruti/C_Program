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
    struct Product pObj1={},pObj2={};

    printf("\n 1st Product Details Are =>\n");

    printf("\n Product ID is =%d.",pObj1.PID);
    printf("\n Product Name is =%s.",pObj1.PName);
    printf("\n Product Purchase Price is =%0.2f.",pObj1.PPPrice);
    printf("\n Product Sales Price is =%0.2f.",pObj1.PSPrice);


    printf("\n 2nd Product Details Are =>\n");

    printf("\n Product ID is =%d.",pObj2.PID);
    printf("\n Product Name is =%s.",pObj2.PName);
    printf("\n Product Purchase Price is =%0.2f.",pObj2.PPPrice);
    printf("\n Product Sales Price is =%0.2f.",pObj2.PSPrice);
    getch();
    return 0;

}

