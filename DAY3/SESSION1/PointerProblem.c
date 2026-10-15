#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter a size: ");
    scanf("%d", &n);

    // int *arr = malloc(n * sizeof(int));
    int arr[n];

    for(int i=0; i<n; i++){
        printf("Element %d: ", i+1);
        scanf("%d", (arr + i));
    }

    printf("\nArray Elements:\n");
    for(int i=0; i<n; i++){
        printf("%d ", *(arr + i));
    }

    return 0;
}