#include <stdio.h>
int main() {
    int n=121, rev=0, rem, temp;
    temp = n;
    while(n > 0) {
        rem = n % 10;
        rev = rev*10 + rem;
        n /= 10;
    }
    if(temp == rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
