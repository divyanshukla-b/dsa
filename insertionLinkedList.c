#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;
};

void LinkedList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" element %d\n", ptr->data);
        ptr = ptr->Next;
    }
}

/*struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr =(struct node *)malloc(sizeof(struct node));
    ptr->Next = head;
    ptr->data = data;
    return ptr;
}*/

/*struct node *insertAtIndex(struct node *head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node*));
    struct node *p=head;
    int i=0;

    while(i!=index-1){
        p=p->Next;
        i++;
    }
    ptr->data=data;
    ptr->Next=p->Next;
    p->Next=ptr;
   return head;

}*/

/*struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node *p = head;
    ptr->data = data;

    while (p->Next != NULL)
    {
        p = p->Next;
    }
    p->Next = ptr;
    ptr->Next = NULL;
    return head;
}*/

struct node *insertAfterNode(struct node *head,struct node *prevnode,int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->Next = prevnode->Next;
    prevnode->Next=ptr;
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
    forth->Next = NULL;

    LinkedList(head);

    // head =  insertAtFirst(head,
    /*head =insertAtIndex(head,77,3);*/
//  head = insertAtEnd(head,54);
  head =insertAfterNode(head,second,75);
    LinkedList(head);
}