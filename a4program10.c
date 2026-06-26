#include <stdio.h>
int main() {
    int n=12345, first, last;
    last = n % 10;        // last digit
    while(n >= 10) {
        n = n / 10;
    }
    first = n;            // first digit
    printf("Sum = %d\n", first + last);
    return 0;
}
