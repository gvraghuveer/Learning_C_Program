#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int main() {
    int (*ptr)(int, int) = add;
    int x = 10, y = 20;
    printf("%d\n", ptr(10, 20));

    int *const p = &x;
    *p = 50;
    printf("%d\n", *p);

    *p = 10;
    const int *const p1 = &x;
    printf("%d\n", *p1);

    return 0;
}