#include <stdio.h>

void fun(int *);

int main() {
    int arr[] = {3, 6, 9, 12, 15, 18};
    fun(arr); // passing array decay pointer
    return 0;
}

void fun(int *p) {
    int i;
    for (i = 0; i < 6; i++) {
        printf("%d\n", *p);
        p++;
    }
}
