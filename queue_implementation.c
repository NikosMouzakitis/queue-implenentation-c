#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

//------------implementing a queue in C.Size 100----------

int front =-1,rear = -1,no;

void add(int * queue)
{

        if(rear == SIZE - 1)
        {
                printf("OVERFLOW.Not availiable to add another element.\n");
        }
        else if(front == -1)
        {
                front = 0;
                rear = front;
                printf("Integer to add:\n");
                scanf("%d",&no);
                queue[rear] = no;
        //      rear++;
        }
        else if( front == 0)
        {
                printf("Sec add\n");
                printf("Integer to add:\n");
                scanf("%d",&no);
                queue[++rear] = no;
        }

}
void display(int * queue)
{
        int i;
        printf("Elements in queue are %d\n",rear+1);
        for(i = 0 ;i <= rear;i++)
                printf("%d ",queue[i]);
        printf("\n");

}

void delete(int *queue)
{

        if(front == -1)
        {
                printf("Queue is empty.\n");
        }
        else if( rear == 0)
        {
                front-- ;
                rear--;

        }
        else if(front == 0)
        {
                int i;
                for(i = 0;i <= rear; i++)
                        queue[i] = queue[i+1] ;

                rear--;
        }
}

void isFull(int * queue)
{
        if(rear == SIZE - 1)
                printf("Queue is full.\n");
        else
                printf("Queue is not full yet,containing %d elements.\n",rear +1);

}

void isEmpty(int * queue)
{
        if(front == -1)
                printf("Queue is empty.\n");
        else
        {
                printf("Queue not empty.");
                display(queue);
        }
}
int main(int argc,char *argv[])
{
        int queue[SIZE];
        int ch;


        while(ch != 6)
        {
                printf("Enter your choice:\n");
                printf("1.add\n2.delete\n3.isFull\n4.isEmpty\n5.display\n6.exit\n");
                scanf("%d",&ch);

                switch(ch) {

                case 1:
                        add(queue);
                        break;
                case 2:
                        delete(queue);
                        break;
                case 3:
                        isFull(queue);
                        break;
                case 4 :
                        isEmpty(queue);
                        break;
                case 5:
                        display(queue);
                        break;
                case 6:
                        exit(0);
                default :
                        break;
                }


        }

        return (0);
}
