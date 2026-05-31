#include <stdio.h>

int main() {
    int a = 66;
    char *c;

    // Typecast the address of the integer to a character pointer
    c = (char*)&a;

    // Prints the numeric value stored in the first byte (66)
    printf("%d\n", *c);

    // Prints the character corresponding to ASCII 66 ('B')
    printf("%c\n", *c);

    return 0;
}
