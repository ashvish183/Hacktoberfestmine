#include<stdio.h>

#define SIZE 5
int arr[SIZE],front=-1,rear=-1;
int main(){
    int cndn=1,ele,val,size,choice;
    void enqueue(int ele);
    int dequeue();
    void dispQueue();
    while(cndn){
        printf("\n Press 1 for insertion \n Press 2 for deletion \n Press 3 for display \n Press 4 for exit:");
        scanf("%d",&choice);
        switch(choice){
            
            case 1: printf("\n Enter the Element to be inserted:");
                    scanf("%d",&ele);
                    enqueue(ele);
                    break;
            case 2: val=dequeue();
                    if(val==-1)
                        printf("\n Queue is empty");
                    else
                        printf("\n Deleted value is :%d",val);
                    break;
            case 3: dispQueue();
                    break;
            case 4: cndn=0;
                    printf("Exit");
                    break;
            default:printf("\n Wrong Input");
        }
    }
    
    return 0;
}
void enqueue(int ele){
    if(front==((rear+1)%SIZE)){
        printf("\nOVERFLOW");
        return;
    }
    if(rear==-1)
        front++;
    rear=(rear+1)%SIZE;
    arr[rear]=ele;
}
int dequeue(){
    int x;
    if(front==-1){
        printf("\nUNDERFLOW");
        return -1;
    }
    x=arr[front];
    if(front==rear)
        front=rear=-1;
    else 
        front=(front+1)%SIZE;
    return x;
}
void dispQueue(){
    int i,x;
    if(rear==-1){
        printf("\n  UNDERFLOW");
        return;
    }
    x=front;
    printf("\n Elements of Queue are:");
    while(x!=rear){
        printf("%d ",arr[x]);
        x=(x+1)%SIZE;
    }
    printf("%d ",arr[x]);
    printf("\n");
}
