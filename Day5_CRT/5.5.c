#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 20, 25, 30};
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("Value of a[%d] \n", i);
        printf("%d \n", arr[i]);
        printf("%d \n", i[arr]);
        printf("%d \n", *(arr + i));
        printf("%d \n", *(i + arr));
    }

    return 0;
}
