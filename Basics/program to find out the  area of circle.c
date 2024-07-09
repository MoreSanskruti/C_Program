#include<stdio.h>
#include<conio.h>

int main()
{

    float area=1.0,radius=1.0, pi=3.14;
    printf("\n Enter Radius:");
    scanf("%f",&radius);

    area=pi*radius*radius;
    printf("\n The Area Of Circle Is %f",area);

    getch();
    return 0;
}
