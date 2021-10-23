#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *Next;

};

int LinkedList(struct node *head)
{
    struct node *ptr = head;
    do{
       printf("%d\t",ptr->data);
       ptr =  ptr->Next;
      }while(ptr!=head);
}

struct node *insertAtFirst(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node *));

   
    ptr->data=data;
    struct node *p= head->Next;

    while(p->Next!=head)
    {
        p=p->Next;
    }

    p->Next=ptr;
    ptr->Next=head;
    head = ptr;

    return head;
}


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->Next = second;

    second->data = 5;
    second->Next = third;

    third->data = 8;
    third->Next = forth;

    forth->data = 30;
    forth->Next = head;

      LinkedList(head);
      printf("\n");

      head =insertAtFirst(head,66);
      LinkedList(head);
}
