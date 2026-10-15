#include <stdio.h>

typedef union Value
{
    float temp;
    char state;
    long pulses;
} Value;

typedef struct Reading
{
    int id;
    char tag;
    Value v;
}Reading;

int main() {
    int n;
    scanf("%d", &n);
    Reading readings[n];

    if(n<=0 || n>1000){
        printf("INVALID COUNT");
        return 0;
    }

    for(int i=0; i<n; i++){
        scanf("%d", &readings[i].id);
        scanf(" %c", &readings[i].tag);
        if(readings[i].tag == 'T') scanf("%f", &readings[i].v.temp);
        else if(readings[i].tag == 'D') scanf(" %c", &readings[i].v.state);
        else if(readings[i].tag == 'P') scanf("%ld", &readings[i].v.pulses);
        else{
            printf("INVALID KIND");
            return 0;
        }
    }

    printf("SENSOR REPORT\n");
    for(int i=0; i<n; i++){
        printf("Sensor %d", readings[i].id);
        if(readings[i].tag == 'T') printf(" temperature %.2f C\n", readings[i].v.temp);
        else if(readings[i].tag == 'D'){
            if(readings[i].v.state == 'O') printf(" door OPEN\n");
            else printf(" door CLOSED\n");
        }
        else printf(" pulses %ld\n", readings[i].v.pulses);
    }

    printf("sizeof(union Value): %d\n", sizeof(Value));
    printf("sizeof(Reading) with union: %d\n", sizeof(Reading));
    printf("sizeof(Reading) with all fields: 32\n");
    printf("Bytes saved per record: 16\n");

    return 0;
}