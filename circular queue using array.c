#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1))) {
        printf("Queue is full.\n");
    } else if (front == -1) {
        front = rear = 0;
        queue[rear] = value;
    } else if (rear == MAX_SIZE - 1 && front != 0) {
        rear = 0;
        queue[rear] = value;
    } else {
        rear++;
        queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else if (front == rear) {
        printf("Dequeued element: %d\n", queue[front]);
        front = rear = -1;
    } else if (front == MAX_SIZE - 1) {
        printf("Dequeued element: %d\n", queue[front]);
        front = 0;
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Elements in the queue are: ");
        int i = front;
        if (front <= rear) {
            while (i <= rear) {
                printf("%d ", queue[i]);
                i++;
            }
        } else {
            while (i <= MAX_SIZE - 1) {
                printf("%d ", queue[i]);
                i++;
            }
            i = 0;
            while (i <= rear) {
                printf("%d ", queue[i]);
                i++;
            }
        }
        printf("\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    enqueue(4);
    display();
    return 0;
}