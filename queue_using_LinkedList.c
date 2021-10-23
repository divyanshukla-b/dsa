#include<stdio.h>
#include<stdlib.h>

struct Node *f=NULL;
struct Node *r=NULL;

struct Node
{
   
    int data;
    int *ptr;
    struct Node *next;
      

};

int LinkedList(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
         ptr= ptr->next;
    }
} 

void enqueue(int val)
{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node *));

    if(n== NULL)  
    {
        printf("queue is full");
  }
  else{
      n->data=val;
      n->next=NULL;
      
      if(f==NULL)
      {
          f=r=n;
      }
      else{
          r->next=n;
          r=n;
      }
  }
}

int dequeue(){

    int value=-1;

    struct Node *ptr = f;

    if(f==NULL)
    {
        printf("empty");

    }
    else{
       f= f->next;
       value = ptr->data;
       free(ptr);

    }
    return value;

}



int main()
{
    LinkedList(f);
    enqueue(10);
    enqueue(12);
    LinkedList(f);
     
    // printf("\n");
   
   //printf("dequeing element:%d",dequeue());
   
   // printf("\n");
   // LinkedList(f);

    return 0;
}

