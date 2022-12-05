#include<stdio.h>
#include<stdlib.h>
#define maxsize 5

void insert();
void delete();
void display();

int front = -1, rear = -1;
int queue[maxsize];

void main()
{
    int choice;
    while(choice != 4)
    {
        printf("\n MAIN MENU \n");
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("\n%d",&choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("\nPlease enter valid choice");
            break;
        }
    }
}

void insert()
{
    int item;
    if(rear == maxsize -1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the element : ");
        scanf("\n%d",&item);
        if(front == -1 && rear == -1)
        {
            front =0;
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = item;
        printf("\nElement Inserted");
    }
}

void delete()
{
    int item;
    if(front == -1 || front > rear)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        item = queue[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
        printf("\nElement Deleted");
    }
}

void display()
{
    if(rear == -1)
    {
        printf("\nEmpty Queue");
    } 
    else
    {
        printf("\nPrinting values...\n");
        for(int i = front; i <= rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}