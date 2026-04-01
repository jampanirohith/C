
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int i, length;
    printf("Enter a string: ");
    gets(str);
    length = strlen(str);
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';
    printf("Reversed string: %s\n", reversed);
    return 0;
}
