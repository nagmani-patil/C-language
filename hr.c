#include<stdio.h>

struct HR
{
    int id;
    char name[30];
    float salary;
    float commission;
};

int main()
{
    struct HR h;

    printf("Enter ID: ");
    scanf("%d",&h.id);

    printf("Enter Name: ");
    scanf("%s",h.name);

    printf("Enter Salary: ");
    scanf("%f",&h.salary);

    printf("Enter Commission: ");
    scanf("%f",&h.commission);

    printf("\nHR Details\n");
    printf("ID         : %d\n",h.id);
    printf("Name       : %s\n",h.name);
    printf("Salary     : %.2f\n",h.salary);
    printf("Commission : %.2f\n",h.commission);

    return 0;
}