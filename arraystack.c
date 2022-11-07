#include<stdio.h>
#include<stdlib.h>

int stack[100], i, j, choice=0, n, top = -1;
void push();
void pop();
void show();
void main()
{
    printf("Enter the number of elements in the stack : ");
    scanf("%d",&n);
    printf("********Stack Operations using array********");
    printf("\n");

    while(choice!=4)
    {
        printf("\nChoose one from the below options");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice..");
            break;
        }
    }
}

void push()
{
    int val;
    if(top == n)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the value : ");
        scanf("%d",&val);
        top = top + 1;
        stack[top] = val;
        printf("\nElement Inserted");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        top = top - 1;
        printf("\nElement Deleted");
    }
}

void show()
{
    for(i = top; i >= 0 ; i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}