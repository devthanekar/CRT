#include <stdio.h>

int main() {
    int a = 5, *pi = &a;
    char b = 'x', *pc = &b;
    float c = 5.5, *pf = &c;

    // Printing initial addresses
    printf("value of pi=Address of a=%u\n", (unsigned int)pi);
    printf("value of pc=Address of b=%u\n", (unsigned int)pc);
    printf("value of pf=Address of c=%u\n", (unsigned int)pf);

    // Pointer arithmetic (incrementing)
    pi++;
    pc++;
    pf++;

    // Printing addresses after incrementing
    printf("now value of pi=%u\n", (unsigned int)pi);
    printf("now value of pc=%u\n", (unsigned int)pc);
    printf("now value of pf=%u\n", (unsigned int)pf);

    return 0;
}
