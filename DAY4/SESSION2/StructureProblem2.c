#include <stdio.h>
#include <stdlib.h>

typedef struct Ticket
{
    int no;
    char veh_regis[100];
    float grossWeight;
    float tareWeight;
} Ticket;


float Helper1(Ticket *ticket){
    return ticket->grossWeight - ticket->tareWeight;
}

void Helper2(Ticket *ticket){
    float net = Helper1(ticket);
    printf("%d %s gross %.2f tare %.2f net %.2f\n", ticket->no, ticket->veh_regis, ticket->grossWeight, ticket->tareWeight, net);
}

int main(){
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 100000){
        printf("INVALID COUNT");
        return 0;
    }

    Ticket *array = (Ticket *)malloc(n * sizeof(Ticket));

    for (int i = 0; i < n; i++){
        scanf("%d", &array[i].no);
        scanf("%s", array[i].veh_regis);
        scanf("%f", &array[i].grossWeight);
        scanf("%f", &array[i].tareWeight);
    }

    printf("WEIGHBRIDGE DAY BOOK\n");

    float total = 0.0f;
    int heavyInd = 0;
    float maxNetWeight = Helper1(&array[0]);

    for (int i = 0; i < n; i++){
        Helper2(&array[i]);

        float net = Helper1(&array[i]);
        total += net;

        if (net > maxNetWeight){
            maxNetWeight = net;
            heavyInd = i;
        }
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", total);
    printf("Heaviest net load: ticket %d %s %.2f\n", array[heavyInd].no, array[heavyInd].veh_regis, maxNetWeight);

    free(array);

    return 0;
}