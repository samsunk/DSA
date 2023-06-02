#include<stdio.h>
#define MAX 10
int arr[MAX];
int front=-1;
int rear=-1;

// enqueue operation
void enqueue(int item){
    if(rear==MAX-1)
    {
        printf("Queue is full");
    }
    else if(front==-1 && rear==-1){
         front=rear=0;
         arr[rear]=item;
    }
    else{
        rear++;
        arr[rear]=item;
    }
    }

// dequeue operation
void dequeue(){
    if(front==-1 && rear==-1){
        printf("queue is empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}

// displaying elements:
void printQueue(){
    int i;
    if(front == -1 && rear==-1){
        printf("queue is empty");
    }
    else{
        printf("Elements of Queue are:\n");
        for(i=front;i<=rear;i++){
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }
}

// displaying peek element
void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else{
        printf("%d",arr[front]);
    }
}

// main function
int main(){
    printf("Performing Queue Operatoins:\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Elements of Queue after enqueue:\n");
    printQueue();
    dequeue();
    printf("Elements after Dequeue:\n");
    printQueue();
    return 0;
}