#include <stdio.h>

int main() {
    int arr[2][3]={
        {10, 20, 30},
        {40, 50, 60}
    };

    int (*ptr)[3]=arr;
    printf("%d", *((*arr+1) + 1));

    return 0;
}