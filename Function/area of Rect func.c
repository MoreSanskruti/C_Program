#include<stdio.h>

int areaofRect(int length,int breadth)
{
int area;
area= length * breadth;
return area;
}
int main()
{
    int l=10,b=5;
    int area=areaofRect(l,b);
    printf("%d\n",area);


     l=20,b=5;
     area=areaofRect(l,b);
     printf("%d\n",area);
}


