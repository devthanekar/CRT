#include <stdio.h>

int main () {
    int a = 87;
    int *p1 = &a;
    int **q1 = &p1;

    printf("Address of a = %u.\n", &a);
    printf("Address of p1 = %u.\n", &p1);
    printf("Address of q1 = %u.\n", &q1);
    printf("Value of p1 %u.\n", p1);
    printf("Value of q1 %u.\n", q1);
    printf("Value of a %d.\n", a);
    printf("Value of a %d.\n", *p1);
    printf("Value of a %d.\n", *(&a));
    printf("Value of a %d.\n", **q1);

    return 0;
}
