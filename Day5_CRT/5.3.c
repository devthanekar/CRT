#include <stdio.h>

int main() {
    char a = 'x', *p1 = &a;
    int b = 12, *p2 = &b;
    float c = 2.5, *p3 = &c;
    double d = 18.33, *p4 = &d;

    printf("sizeof(p1) = %zu, sizeof(*p1) = %zu\n", sizeof(p1), sizeof(*p1));
    printf("sizeof(p2) = %zu, sizeof(*p2) = %zu\n", sizeof(p2), sizeof(*p2));
    printf("sizeof(p3) = %zu, sizeof(*p3) = %zu\n", sizeof(p3), sizeof(*p3));
    printf("sizeof(p4) = %zu, sizeof(*p4) = %zu\n", sizeof(p4), sizeof(*p4));

    return 0;
}
