#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node*head; 

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main()
{
    int choice = 0;
    while(choice != 9)
    {
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("\nEnter your choice : \n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:  
                beginsert();      
                break;  
            case 2:  
                lastinsert();         
                break;  
            case 4:  
                begin_delete();       
                break;  
            case 5:  
                last_delete();        
                break;  
            case 7:  
                search();         
                break;  
            case 8:  
                display();        
                break;  
            case 9:  
                exit(0);  
                break;  
            default:  
                printf("Please enter valid choice..");  
        }  
    }
}


void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node*) malloc(sizeof(struct node*));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("%d",&item);
        ptr -> data = item;
        ptr -> next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}

void lastinsert()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("%d",&item);
        ptr -> data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while(temp -> next !=NULL)
            {
                temp = temp ->next;
            }
            temp -> next = ptr;
            ptr -> next = NULL;
            printf("\nNode inserted");
        }
    }
}

void begin_delete()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr -> next;
        free(ptr);
        printf("\nNode deleted from the beginning");
    }
}

void last_delete()
{
    struct node *ptr,*ptr1;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else if(head -> next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nOnly node of the list deleted..\n");
    }
    else
    {
        ptr = head;
        while(ptr -> next == NULL)
        {
            ptr1 = ptr;
            ptr = ptr -> next;
        }
        ptr1 -> next = NULL;
        free(ptr);
        printf("\nDeleted node from the last..\n");
    }
}

void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        printf("\nEnter item which you want to search : ");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(ptr -> data == item)
            {
                printf("Item found at location %d", i+1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr -> next;
        }
        if(flag == 1)
        {
            printf("\nItem not found");
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nNothing to print");
    }
    else
    {
        printf("Printing values...\n");
        while(ptr!=NULL)
        {
            printf("\n%d",ptr -> data);
            ptr = ptr -> next;
        }
    }
}