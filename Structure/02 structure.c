#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
    int RollNo;
    char Name[12];
    char City[8];
    float Per;
};
int main()
{
          struct stud std1, std2, std3={21,"raj mane","karad",95.24654};

          std1.RollNo=65;
          strcpy(std1.Name,"kunal more");
          strcpy(std1.City,"pune");
          std1.Per=75.95875;

          printf("\n Enter Roll No:");
          scanf("%d",&std2.RollNo);

          printf("\n Enter Name:");
          scanf("%d[^\n]",&std2.Name);
          fflush(stdin);

          printf("\n Enter City:");
          scanf("%d[^\n]",&std2.City);
          fflush(stdin);

          printf("\n Enter Percentage:");
          scanf("%f",&std2.Per);

          printf("\n 1st student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t Percentage - %0.2f.\n",std1.RollNo,std1.Name,std1.City,std1.Per);
          printf("\n 2nd student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t Percentage - %0.2f.\n",std2.RollNo,std2.Name,std2.City,std2.Per);
          printf("\n 3rd student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t Percentage - %0.2f.\n",std3.RollNo,std3.Name,std3.City,std3.Per);


        getch();
        return 0;

}
