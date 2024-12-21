#include <stdio.h>
int stringLength(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
