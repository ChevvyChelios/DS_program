/***** Basic Stack Operation *****/
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct stackNode{
    int data;
    struct stackNode* next;
} node;
node* new_node(int data){
    node* stackNode = (node*)malloc(sizeof(node));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
int isEmpty(node* root){
    return !root;
}
void push(node** root, int data){
    node* stackNode = new_node(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}
void pop(node** root){
    if(isEmpty(*root)){
        printf("No element is popped: (Stack is empty)\n");
        return;
    }
    node* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    printf("\n%d popped from stack\n", popped);
}
void peek(node* root){
    if(isEmpty(root)){
        printf("Top element is: (Stack is empty)\n");
        return;
    }
    printf("Top element is: %d\n", root->data);
}
void display(node* root){
    while (root != NULL){
        printf("%d -> ", root->data);
        root = root->next;
    }
    printf("NULL \n");
}

int main(){
    node* root = NULL;
    printf("\n");
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    
    printf("Stack is: ");
    display(root);
    
    peek(root);
    pop(&root);
    
    printf("New Stack is: ");
    display(root);

    peek(root);
    pop(&root);
    pop(&root);

    printf("New Stack is: ");
    display(root);

    printf("\n");

    return 0;
}