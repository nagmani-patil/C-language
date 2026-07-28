#include <stdio.h>
int main() {
    char str[100], ch;
    int found = 0;
    printf("Enter string: ");
    gets(str);
    printf("Enter character to search: ");
    scanf("%c", &ch);

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }
    if(!found) printf("Character not found.\n");
    return 0;
}
