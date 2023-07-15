#include<stdio.h>
#include<conio.h>

int main()
{
    int inum[5]={5,23,0,-9,5};

    printf("\n value of 101 Element=%d",inum[0]);
    printf("\n value of 102 Element=%d",inum[1]);
    printf("\n value of 103 Element=%d",inum[2]);
    printf("\n value of 104 Element=%d",inum[3]);
    printf("\n value of 105 Element=%d",inum[4]);
    printf("\n =======thanks=========");
    getch();

    inum[3]=105;
    inum[4]=inum[0];
    inum[0]++;
    inum[2]=5;

    printf("\n========================================\n");

    printf("\n value of 401 Element=%d",inum[0]);
    printf("\n value of 402 Element=%d",inum[1]);
    printf("\n value of 403 Element=%d",inum[2]);
    printf("\n value of 404 Element=%d",inum[3]);
    printf("\n value of 405 Element=%d",inum[4]);
    printf("\n =======thanks=========");
    printf("\n\n press any key to continue.....");
    getch();
    return 0;
}


