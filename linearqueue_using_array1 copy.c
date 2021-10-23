#include<stdio.h>
#include<stdlib.h>

struct queue 
{
    int size;
    int f,r;
    int *arr;
};

int isFull(struct queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

void Enqueue(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("queue is full");

    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
   
}

int Dequeue(struct queue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("queue is Empty");

    }
    else{

        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size=20;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*(sizeof(int)));

    
    Enqueue(&q,12);
    Enqueue(&q,122);

    printf("Dequeuing element:%d \n",Dequeue(&q));
    printf("Dequeuing element:%d\n",Dequeue(&q));

    if(isEmpty(&q))
    {
        printf("queue is now empty\n");

    }
    if(isFull(&q))
    {
        printf("queue is full\n");
    }

}