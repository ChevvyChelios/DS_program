#include<stdio.h>
#define MAX 100

void push(int stack[], int *top, int X){
    if (*top == MAX -1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++(*top)] = X;
}
void pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped element: %d\n", stack[(*top)--]);
}

int peek(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void display(int stack[], int top) {
    printf("Current Stack: ");
    for (int i=top; i>=0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    int stack[MAX];
    int top = -1;

    push(stack, &top, 10);
    push(stack, &top, 20);
    push(stack, &top, 30);

    display(stack, top);

    printf("Top element: %d\n", peek(stack, top));

    pop(stack, &top);
    display(stack, top);

    pop(stack, &top);
    display(stack, top);

    return 0;
}