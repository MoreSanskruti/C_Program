#include<stdio.h>
#include<conio.h>

int main()
{
    int no=21;
    int *p=&no;
    int **q=&p;
    int ***m=&q;
    int ****x=&m;
    int *****r=&x;

    printf("\n%d",&no);
    printf("\n%d",&p);
    printf("\n%d",&q);
    printf("\n%d",&m);
    printf("\n%d",&x);
    printf("\n%d",&r);

    printf("\n===================\n\n");
    getch();

    printf("\n%d",no);
    printf("\n%d",&no);
    printf("\n%d",&p);
    printf("\n%d",*p);
    printf("\n%d",**r);
    printf("\n%d",**(&m));
    printf("\n%d",&(***x));
    printf("\n%d",****r);

    getch();
    return 0;

}

