// C code for queue and its operation using array 
#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}


int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}


void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
int dequeue(struct queue *q){
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        return q->arr[q->f];
    }
    
}


int main(){
       struct queue q;
    q.size = 100;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    enqueue(&q,43);
    enqueue(&q,12);
    enqueue(&q,15);
    
    printf("The dequeue %d\n",dequeue(&q));
    printf("The dequeue %d\n",dequeue(&q));
    printf("The dequeue %d\n",dequeue(&q));
    printf("The dequeue %d\n",dequeue(&q));
   return 0;
}
