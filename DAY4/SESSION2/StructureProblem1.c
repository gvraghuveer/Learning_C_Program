#include <stdio.h>

typedef struct Address
{
    char village[100];
    int pin;
}Address;


typedef struct Member{
    int id;
    char name[30];
    double shareCapital;
    Address add;
}Member;

int main() {
    Member arr[10000];
    int n;
    double total = 0;
    int max = 0;
    printf("Enter the no. of members: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("INVALID COUNT");
        return 0;
    }

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i].id);
        scanf("%s", &arr[i].name);
        scanf("%lf", &arr[i].shareCapital);
        scanf("%s", &arr[i].add.village);
        scanf("%d", &arr[i].add.pin);

        total += arr[i].shareCapital;
        if(arr[i].shareCapital > arr[max].shareCapital) max = i;
    }
    printf("MEMBER LEDGER\n");
    for(int i=0; i<n; i++){
        printf("%d %s %lf %s %d\n", arr[i].id, arr[i].name, arr[i].shareCapital, arr[i].add.village, arr[i].add.pin);
    }

    printf("Total share capital (Rs): %lf\n", total);
    printf("Highest holder: %d %s %lf %s %d\n", arr[max].id, arr[max].name, arr[max].shareCapital, arr[max].add.village, arr[max].add.pin);
    return 0;
}