#include<stdio.h>
int main()
{
    double first,second, temp;
    printf("\n Enter First Number:");
    scanf("%lf",&first);
    printf("\n Enter Second Number :");
    scanf("%lf",&second);

    temp = first;
    first = second;
    second= temp;

    printf("\n After swapping first number = %.21f\n",first);
    printf("\n After swapping second number = %.21f\n",second);

    return 0;
}
