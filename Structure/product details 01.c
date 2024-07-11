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
    struct Product pObj;

    pObj.PID=21;
    strcpy(pObj.PName,"Book");
    pObj.PPPrice=110;
    pObj.PSPrice=150;

    printf("\n Product ID is =%d.",pObj.PID);
    printf("\n Product Name is =%s.",pObj.PName);
    printf("\n Product Purchase Price is =%0.2f.",pObj.PPPrice);
    printf("\n Product Sales Price is =%0.2f.",pObj.PSPrice);

    getch();
    return 0;

}
