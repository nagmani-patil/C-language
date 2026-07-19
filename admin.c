#include<stdio.h>

struct Admin
{
    int id;
    char name[30];
    float salary;
    float allowance;
};

int main()
{
    struct Admin a;

    printf("Enter ID: ");
    scanf("%d",&a.id);

    printf("Enter Name: ");
    scanf("%s",a.name);

    printf("Enter Salary: ");
    scanf("%f",&a.salary);

    printf("Enter Allowance: ");
    scanf("%f",&a.allowance);

    printf("\nAdmin Details\n");
    printf("ID         : %d\n",a.id);
    printf("Name       : %s\n",a.name);
    printf("Salary     : %.2f\n",a.salary);
    printf("Allowance  : %.2f\n",a.allowance);

    return 0;
}