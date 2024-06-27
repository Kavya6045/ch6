#include <stdio.h>

int main() {
    char str[100], ch;
    int i, length = 0, count[256] = {0}; // Array to store character frequencies

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string (excluding null terminator)
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Count character frequencies
    for (i = 0; i < length; i++) {
        count[str[i]]++;
    }

    // Print character frequencies
    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}

