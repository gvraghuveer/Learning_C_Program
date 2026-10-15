#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int (*ptr)[3] = &arr;
    printf("%d\n", (*ptr)[2]);
    return 0;
}