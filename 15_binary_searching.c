#include<stdio.h>
int binary_searching(int arr[],int size,int key)
{
    int lb=0,ub=size-1,mid,count=0;
    while (lb<=ub)
    {
        mid=(lb+ub)/2;
        if (arr[mid]==key)
        {
            count++;
        }
        if (key>arr[mid])
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
        
        

    }
    return count;
    
}
int main()
{
    int arr[100],size,key,found=0;
    printf("Enter size::");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d elemet:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter key:");
    scanf("%d",&key);
    found=binary_searching(arr,size,key);
    if (found==1)
    {
        printf("Key found.");
    }
    else
    {
        printf("Key not found");
    }
    
    
    return 0;
}