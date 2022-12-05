#include<stdio.h>
void main() {
    int a[5],x,n,pos;
    printf("\nEnter the number of terms : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the term to be searched : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x == a[i])
        {
            pos = i;
        }
    }
    if(pos == 0)
    {
        printf("\nElement not found");
    }
    else
    printf("\nElement found at %d",pos+1);
}