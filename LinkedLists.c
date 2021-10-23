#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *Next;

};

int LinkedList(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
         ptr= ptr->Next;
    }
}


int main(){

    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    

    head->data =4;
    head->Next =second;

    second->data =5;
    second->Next =third;

    third->data=8;
    third->Next =NULL;

    LinkedList (head);

}