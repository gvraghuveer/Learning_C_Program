#include <stdio.h>

int main(){
    int n = 10;
    int *ptr = &n;
    int *ptr2 = NULL;

    printf("%d\n", n);
    printf("%p\n", (void *) &n);
    printf("%p\n\n", (void *) ptr2);

    *ptr = *ptr + 10;
    printf("%d\n", n);

    char ch = 'A';
    char *p = &ch;
    *p = 'B';
    printf("%c", ch);

    return 0;
}