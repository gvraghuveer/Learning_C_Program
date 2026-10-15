#include <stdio.h>

int main()
{
    int n, count = 0;
    int notes[6] = {100, 20, 10, 5, 2, 1};

    scanf("%d", &n);
    int size = sizeof(notes) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if(n == 0){
            break;
        }
        count += n / notes[i];
        n = n % notes[i];
    }
    printf("%d", count);

    return 0;
}