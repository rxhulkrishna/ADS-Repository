#include <stdio.h>

int main()
{
    printf("\n Enter the number of elements :  \n");
    int s;
    scanf("%d",&s);
    int arr[s],i,bs[s];
    printf("\n Enter the array elements :  \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
        bs[i]=(arr[i]%2!=0)?1:0;
    }
    

    printf("\n Bit string = ");
    for(i=0;i<s;i++)
    {
        printf(" %d ",bs[i]);
    }

    printf("\n Odd elements array = ");
    for(i=0;i<s;i++)
    {
        if(bs[i]==1)
        {
            printf(" %d ",arr[i]);
        }
    }
    return 0;
}
