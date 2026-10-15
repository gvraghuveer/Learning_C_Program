#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int *ptr[30] = {&a, &b, &c};

    for(int i=0; i<3; i++){
        printf("%d ", *ptr[i]);
    }
    
    return 0;
}

