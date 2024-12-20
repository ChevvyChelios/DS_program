#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isFull(){
    return (rear + 1) % MAX == front;
}

int isEmpty(){
    return front == -1;
}

void enque(int data){
    if (isFull()){
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;

    rear = (rear+1) % MAX;
    queue[rear] = data;
    printf("Element %d inserted\n", data);
}

int deque(){
    if (isEmpty()){
        printf("Queue underflow\n");
        return -1;
    }
    int data = queue[front];
    if (front == rear){
        front = rear = -1;
    }
    else {
        front = (front + 1) % MAX;
    }
    return data;
}

void display(){
    if (isEmpty()){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i=front;
    while (i!=rear){
        printf("%d ", queue[i]);
        i = (i+1) % MAX;
    }
    printf("%d\n", queue[i]);
}

int main(){
    enque(10);
    enque(20);
    enque(30);
    display();
    printf("Dequeued element: %d\n", deque());

    display();
    return 0;
}