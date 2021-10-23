#include<stdio.h>
#include<stdlib.h>

struct DEqueue
{
    int size;
    int f,r;
    int *arr;
};

int isFull(struct DEqueue *q)

{
    if(q->r==q->size-1)
    {
        printf("Queue is full");
        return 1;
    }
    else{
        return 0;
    }

}

int isEmpty(struct DEqueue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct DEqueue *q,int val)
{
  if(isFull(q))
  {
      printf("Queue is full");
 }

 else{
     q->r++;
     q->arr[q->r]=val;
 }
 return q->arr[q->r];

}


int dequeue(struct DEqueue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("the queue is empty");

    }
    q->f++;
    a=q->arr[q->f];

return a;
}

int main()
{
    struct DEqueue q;
     q.size=10;
     q.f=q.r=-1;

    q.arr=(int *)malloc(q.size*sizeof(int));
    
  printf("Enqued element: ",  enqueue(&q,12));
  printf("Enqued element: ",enqueue(&q,122));

}