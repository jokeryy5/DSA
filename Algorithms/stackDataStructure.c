#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define MAXOFSTACK 10

int toCount= 0;

struct stack{

    int data[MAXOFSTACK];
    int top;
};

typedef struct stack ST;
///////////////////////////////////
int isStackIsFull(ST *myStack){
    if(myStack->top == MAXOFSTACK-1){
        return 1;
    } else{
        return 0;
    }

}

int isStackIsEmpty(ST *myStack){

    if(myStack->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void creat_emptyStack(ST *myStack ) {
    myStack->top = -1;
}

void pushToStack(ST *myStack, int value){
    if(isStackIsFull(myStack)){

        printf("Stack is Full!\n");


    }else{

        myStack->top++;

        myStack->data[myStack->top]= value;
    }

    toCount++;
}

int totalData(ST *myStack){
    return myStack->top;
}

void popFromStack(ST *myStack){
if(isStackIsEmpty(myStack)){
    printf("Stack is Empty now!!");
} else{
    printf("Pop From stack Data is: %d\n", myStack->data[myStack->top]);
    myStack->top--;

}
    toCount--;
}
int main(){

    ST *myStack= (ST*)malloc(sizeof(ST));
    creat_emptyStack(myStack);

    pushToStack(myStack, 10);
    pushToStack(myStack, 11);
    pushToStack(myStack, 12);
    pushToStack(myStack, 13);
    pushToStack(myStack, 14);
    pushToStack(myStack, 15);
    pushToStack(myStack, 16);
    pushToStack(myStack, 17);
    pushToStack(myStack, 18);
    pushToStack(myStack, 19);


    printf("There are %d datas in the stack\n", totalData(myStack));
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);

    return 0;
}