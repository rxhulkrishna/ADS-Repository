#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front,*rear;

void insert();
void delete();
void display();

void main()
{
    int choice;
    while(choice != 4)
    {
        printf("\n MAIN MENU");
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("\n%d",&choice);

        switch(choice)
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
        };
    }
}

void insert()
{
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    int item;
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("\n%d",&item);
        ptr -> data = item;
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            ptr -> next = NULL;
        }
    }

}

void delete()
{
    struct node *ptr;
    if(front == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
        printf("\nElement Deleted");
    }
}

void display()
{
    struct node*ptr;
    ptr = front;
    if(ptr == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nPrinting values...\n");
        while(ptr != NULL)
        {
            printf("%d\n",ptr -> data);
            ptr = ptr -> next;
        }
    }
}