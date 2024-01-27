#include<stdio.h>
#include<string.h>

void main()
{
    char str1[10];
    char str2[20];

    printf("enter two string \n");
    gets(str1);
    gets(str2);

    printf("\n Concatenation of str1 and str2 is %s",strcat(str1,str2));
}
