#include <stdio.h>
int main() {
    int n, temp, rem, sum=0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  // original number store kar liya

    while(n > 0) {
        rem = n % 10;    // last digit
        fact = 1;
        for(i=1; i<=rem; i++) {
            fact *= i;   // digit ka factorial
        }
        sum += fact;     // factorial ko sum me add
        n /= 10;         // digit remove
    }

    if(sum == temp)
        printf("%d is a Strong Number\n", temp);
    else
        printf("%d is Not a Strong Number\n", temp);

    return 0;
}
