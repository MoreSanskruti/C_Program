#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;

    printf("\n Tables In Range 7 To 13 => ");
    printf("\n ================*****=================\n\n");

    for(R = 1; R <= 10; R++)
    {
        for(C = 7; C <= 13; C++)
        {
            printf(" %-4d", R * C);
        }
        printf("\n");
    }
    printf("\n ================*****=================\n");

    getch();
    return 0;
}
