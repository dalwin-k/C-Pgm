#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;
typedef struct {
 node* head;
}linkedlist;
node* createnode(int data){
    node* newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL){
        printf("memory allocation failed");
        exit(1);
    }
    newnode->data = data;
    newnode->next=NULL;
    return newnode;
}
void insertatbeginning(linkedlist*list,int data){
    node* newnode= createnode(data);
    newnode->next= list->head;
    list->head= newnode;
    printf("%d inserted at the beginning\n",data);
}
int deletefrombeginning(linkedlist* list){
    if(list->head==NULL){
        printf("list is empty\n");
        return-1;
    }node* temp= list->head;
    int data= temp->data;
    list-> head=temp-> next;
    free(temp);
    return data;
}
void printlist(linkedlist* list){
    node* current= list-> head;
    printf("linked list:");
    while(current!= NULL){
        printf("%d->", current->data);
        current= current-> next;
    }
printf("NULL\n");
}
int main(){
    linkedlist list;
    list.head=NULL;
    insertatbeginning(&list, 10);
    insertatbeginning(&list, 20);
    insertatbeginning(&list, 30);
    printlist(&list);
    }