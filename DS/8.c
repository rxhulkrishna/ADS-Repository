#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

void push();
void pop();
void display();

void main()
{
    int choice = 0;
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------------\n");
    while(choice != 4)
    {
        printf("\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\nEnter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Please enter valid choice");
        };
    }
}

void push()
{
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    int item;
    if(ptr == NULL)
    {
        printf("\nNot able to push the element");
    }
    else
    {
        printf("\nEnter the value : ");
        scanf("\n%d",&item);
        ptr -> data = item;
        if(head ==  NULL)
        {
            ptr -> next = NULL;
            head = ptr;
        }
        else
        {
            ptr -> next = head;
            head = ptr;
        }
        printf("\nItem pushed");
    }
}

void pop()
{
    struct node *ptr;
    int item;
    if(head ==  NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        ptr = head;
        item = head -> data;
        head = head -> next;
        free(ptr);
        printf("\nItem popped");
    }
}

void display()
{
    int item;
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\n Printing Stack Elements..\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr -> data);
            ptr = ptr -> next;
        }
    }
}