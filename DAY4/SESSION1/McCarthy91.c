#include <stdio.h>
int nested(int n){
    if(n > 100) return n-10;
    else return nested(nested(n+11));
}

int main() {
    printf("%d", nested(0));
    return 0;
}