// C code for queue and its operation using array
#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isfull(struct circularqueue *q)
{
    if (q->f == (q->r + 1) % q->size)
    {
        return 1;
    }
    else
        return 0;
}

void enqueue(struct circularqueue *q, int value)
{
    if (isfull(q))
    {
        printf("The queue is full");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
      q->arr[q->r]=value;     
      printf("The enqueue value %d \n", value)  ; 
    }
}

int dequeue(struct circularqueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}

int main()
{
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 43);
    enqueue(&q, 12);
    enqueue(&q, 15);

    printf("The dequeue %d\n",dequeue(&q));
    printf("The dequeue %d\n",dequeue(&q));
    printf("The dequeue %d\n",dequeue(&q));
    return 0;
}
