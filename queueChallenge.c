#include <stdio.h>
#define SIZE 5
int values[SIZE], front= -1, rear= -1;

void printQueue(){
    if(rear == -1) 
        printf("The Queue is empty.\n");
    else{
        int i;
        for(i = 0; i <= rear; i++)
            printf("Position %d: %d\n", i, values[i]);
    }
    printf("------------------------------------\n");
}

void enQueue(int value){
    if(rear == SIZE-1) {
        printf("The Queue is full.\n");
        printQueue();
    }
    else {
        if(front == -1)
            front = 0;
        rear++;
        values[rear] = value;
        printf("%d has been inserted correctly\n", value);
        printQueue();
    }
}

void deQueue(){
    if(front == -1) {
        printf("The Queue is empty.\n");
        printQueue();
    }
    else{
        printf("%d has been deleted correctly\n", values[front]);
        printQueue();
        int i;
        for(i = 0; i < rear; i++)
            values[i] = values[i+1];
        values[rear] = 0;
        rear--;
        if(front > rear)
            front = rear = -1;
    }
}


int main(int argc, char const *argv[]){
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
    enQueue(10);
    enQueue(11);

    return 0;
}