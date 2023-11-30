#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swapCase(char* str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        else if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char input_string[100];

    printf("Input> ");
    fgets(input_string, sizeof(input_string), stdin);

    input_string[strcspn(input_string, "\n")] = '\0';

    swapCase(input_string);

    printf("Output> %s\n", input_string);

    return 0;
}
