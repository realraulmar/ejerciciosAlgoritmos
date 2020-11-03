#include <stdio.h>
#define SIZE 5
int values[SIZE], front = -1, rear = -1;

void enQueue(int value) {
    if(rear == SIZE - 1) {
        printf("Nuestro queue esta lleno\n");
    } else {
        if(front == -1) {
            front = 0;
        }
        rear++;
        values[rear] = value;
        printf("Se inserto el valor %d correctamente\n", value);
    }
}

void deQueue() {
    if(front == -1) {
        printf("Nuestro Queue esta vacío\n");
    } else {
        printf("Se elimino el valor %d\n", values[front]);
        for(int i = 0; i < rear; i++) {
            values[i] = values[i + 1];
        }
        values[rear] = 0;
        rear--;
        if(front > rear) {
            front = rear = -1;
        }
    }
}

void printQueue() {
    printf("-----------------------------\n");
    if(rear == -1)
        printf("Nuestro Queue esta vacío\n");
    else{
        int i;
        for(i = 0; i <= rear; i++)
            printf("Posición %d: %d\n", i, values[i]);
    }
    printf("-----------------------------\n");
}

int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    enQueue(6);
    enQueue(7);
    enQueue(8);
    enQueue(9);
    deQueue();
    deQueue();
    enQueue(10);
    enQueue(11);
    printQueue();
    return 0;
}