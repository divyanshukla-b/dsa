#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

int DoublyLinkedList(struct node *N1)
{
    struct node *ptr = N1;

    while (ptr->prev != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
        ptr->prev = ptr;
    }
}

int main()
{
    struct node *N1;
    struct node *N2;
    struct node *N3;

    N1 = (struct node *)malloc(sizeof(struct node *));
    N2 = (struct node *)malloc(sizeof(struct node *));
    N3 = (struct node *)malloc(sizeof(struct node *));

    N1->data = 5;
    N1->next = N2;
    N1->prev = NULL;

    N2->data = 9;
    N2->next = N3;

    N3->data = 10;
    N3->prev = N2;

    N2->prev = N1;

    DoublyLinkedList(N1);
}