#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int LinkedList(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
         ptr= ptr->next;
    }
}

/*struct node *deletionOfhead(struct node *head)
{
    struct node *ptr = head;
    head=head->next;
    free(ptr);
    return head;
    
}*/

struct node *DeleteAtindex(struct node *head,int index)
{
    struct node *p =head;
    struct node *q =p->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next =q->next;
    free(q);
    return head;
}*/

/*struct node *DeleteLastNode(struct node *head)
{
    struct node *p=head;
    struct node *q = p->next;
    while(q->next!=NULL){
       
       p=p->next;
       q=q->next;
    }

   // p->next=q->next;
    p->next=NULL;
    free(q);

    return head;
}*/

struct node *DeleteAtInd(struct node *head,int value)
{
    struct node *p =head;
    struct node *q =p->next;

    while(q->data!=value && q->next!=NULL){
          p=p->next;
           q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
    
}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head = (struct node *)malloc(sizeof(struct node*));
    second = (struct node *)malloc(sizeof(struct node*));
    third = (struct node *)malloc(sizeof(struct node*));
    forth = (struct node *)malloc(sizeof(struct node*));


 head->data=7;
 head->next=second;

 second->data=8;
 second->next=third;

 third->data=9;
third->next=forth;

forth->data=10;
forth->next=NULL;

LinkedList(head);
printf("\n");

//head =deletionOfhead(head);
//head = DeleteAtindex(head,2);
//head = DeleteLastNode(head);
head = DeleteAtInd(head,9);
LinkedList(head);

}
