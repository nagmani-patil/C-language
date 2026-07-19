#include<stdio.h>

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    struct Distance d;

    printf("Enter Feet and Inches: ");
    scanf("%d%f",&d.feet,&d.inch);

    printf("Distance = %d Feet %.2f Inches",d.feet,d.inch);

    return 0;
}