#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct
{
    int item[MAX];
    int top;
}Stack;

stack* createStack()
{
    Stack* stack=(Stack*)malloc(sizeof(Stack));

}
int isFull(Stack*stack)
{ 
    return stack->top==MAX-1;
}
int isEmpty(Stack*satck)
{
    return stack->top==-1;
}
void push(Stack* stack,int item){
    if(isFull(stack)){
        print("stack over flow\n");
        return;
            }
            stack-> top=stack->top+1;
            stack->item[stack->top]=item;
            printf("%d push to stadck\n", item);
}
int pop(stack*stack)

{if(isEmpty(stack))
{
    printf(" stack is empty\n");
    return-1;
}
int poppeditem=stack->item[stack->top];
stack->top=stack->top-1;
return poppeditem;
}
int main(){
    Stack* stack=createstack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    prinf("%d popped from stack\n",pop(stack));

}
