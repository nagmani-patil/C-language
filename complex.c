#include<stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

int main()
{
    struct Complex c;

    printf("Enter Real and Imaginary Parts: ");
    scanf("%f%f",&c.real,&c.imaginary);

    printf("Complex Number = %.2f + %.2fi",c.real,c.imaginary);

    return 0;
}