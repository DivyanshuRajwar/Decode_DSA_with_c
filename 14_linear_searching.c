#include<stdio.h>
int linear_searching(int arr[],int size,int key)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            count++;
        }
        
    }
    return count;
    
}
int main()
{
    int arr[100],size,found=0,key;
    printf("Enter the size:");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d elements::",i+1);
        scanf("%d",&arr[i]);
    }
    printf("KEY:");
    scanf("%d",&key);
    found=linear_searching(arr,size,key);
    if (found==1)
    {
        printf("KEY FOUND.");
    }
    else
    {
        printf("KEY NOT FOUND.");
    }
    
    
    return 0;
}