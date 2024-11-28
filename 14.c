# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
void insert();
void delete();
void display();
void main(){
    int choice;
    printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n\n");  
    while(choice != 4)   {     
        printf("Enter your choice: ");  
        scanf("%d",&choice);  
        switch(choice) {  
            case 1:  
                insert();  
                break;  
            case 2:  
                delete();  
                break;  
            case 3:  
                display();  
                break;  
            case 4:  
                printf ("Exiting...\n")  ;
                break;  
            default:   
                printf("\nEnter valid choice \n");
                break;
        }  
    } 
}
void insert(){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    int item;
    printf ("Enter the value: ");
    scanf ("%d", &item);
    ptr->data = item;
    if (front == NULL){
        front = ptr;
        rear = ptr;
        front->next = NULL;
        rear->next = NULL;
    } else{
        rear->next = ptr;
        rear = ptr;
        rear->next = NULL;
    }
}
void delete(){
    if (front == NULL){
        printf ("UNDERFLOW\n");
        return;
    }
    else{
        struct node* ptr = front;
        front = front->next;
        int pop = ptr->data;
        free(ptr);
        printf("%d deleted from queue\n", pop);
    }
}
void display(){
    struct node* ptr;
    ptr = front;
    if (front == NULL){
        printf ("Queue is Empty\n");
    }
    else{
        printf ("Printing queue...\n");
        while (ptr != NULL){
            printf ("%d <- ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}