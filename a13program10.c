#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);

    int i=0, j=strlen(str)-1, flag=1;
    while(i<j) {
        if(str[i]!=str[j]) {
            flag=0;
            break;
        }
        i++; j--;
    }

    if(flag) printf("Palindrome\n");
    else     printf("Not Palindrome\n");
    return 0;
}
