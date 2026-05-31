#include<stdio.h>

int main() {
    int a = 87;
    int *p1 = &a;

    printf("Address of a = %p.\n", (void *)&a);
    printf("Address of p1 = %p.\n", (void *)&p1);

    printf("Value of p1 = %p.\n", (void *)p1);
    printf("Value of a = %d.\n", a);
    printf("Value of a = %d.\n", *p1);
    printf("Value of a = %d.\n", *(&a));

    return 0;
}
