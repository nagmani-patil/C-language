#include <stdio.h>
int main() {
    int n=153, rem, sum=0, temp;
    temp = n;
    while(n > 0) {
        rem = n % 10;
        sum += rem*rem*rem;
        n /= 10;
    }
    if(sum == temp) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}
