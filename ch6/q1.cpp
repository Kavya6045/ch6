#include <stdio.h>

int main() {
    char str[100], ch;
    int i, length = 0, is_palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string (excluding null terminator)
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

