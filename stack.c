#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int count=0;
// defining a stack template
struct stack{
    int items[MAX];
    int top;
};
typedef struct stack mystack;

// creating empty stack
void createEmptyStack(mystack *s){
s->top=-1;
}

// check if the stack is full
int isFull(mystack *s){
    if(s->top==MAX-1)
    return 1;
    else
    return 0;
}

// check if the stack is empty
int isEmpty(mystack *s){
    if(s->top==-1)
    return 1;
    else
    return 0;
}

// Add elements into stack
void push(mystack *s,int newitem){
    if(isFull){
        printf("Stack is full\n");
    }
    else{
        s->top++;
        s->items[s->top]=newitem;
    }
    count++;
}

// Remove element from stack
void pop(mystack *s){
    if(isEmpty){
        printf("Stack is Empty\n");
    }
    else{
        printf("Item popped=%d",s->items[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}

// diplaying element of the stack
void printStack(mystack *s){
    printf("stack :");
    for(int i=0;i<count;i++){
        printf("%d",s->items[i]);
    }
    printf("\n");
}

// main method
int main(){
    mystack *s=(mystack*)malloc(sizeof(mystack));
    createEmptyStack(s);
    push(s,11);
    push(s,2);
    push(s,10);

    printStack(s);

    pop(s);

    printf("After popping out \n");
    printStack(s);
}