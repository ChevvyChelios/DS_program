#include<stdio.h>
#include<stdlib.h>
# define Max 5
void insert();
void delete();
void display();
int front = -1, rear = -1;
int queue[Max];
void main(){
    int choice;
    printf("\n*************************Main Menu*****************************\n");
    printf("Max size of queue is 5");
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
    int item;
    printf ("Enter the value: ");
    scanf("%d", &item);
    if (rear == Max-1){
        printf ("OVERFLOW\n");
        return;
    }
    if (front==-1 && rear==-1){
        front = 0;
        rear = 0;
    } else{
        rear = rear + 1;
    }
    queue[rear] = item;
    printf ("Item Inserted \n");
}
void delete(){
    int item;
    if (front == -1 || front > rear){
        printf ("\nUNDERFLOW\n");
        return;
    }
    else{
        item = queue[front];
        if (front==rear){
            front = -1;
            rear = -1;
        } else{
            front = front +1;
        }
        printf ("Item Deleted from Queue\n");
    }
}
void display(){
    if (rear==-1){
        printf ("Queue is Empty\n");
    }
    else{
        printf ("Printing Queue...\n");
        for(int i=front; i<=rear; i++){
            printf ("%d\n", queue[i]);
        }
    }
}