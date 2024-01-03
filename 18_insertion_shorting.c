#include<stdio.h>
void insertion_shorting(int [],int);
int main()
{
    int arr[100],size;
    printf("Enter the size:");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    insertion_shorting(arr,size);
    for (int j = 0; j < size; j++)
    {
        printf("%d\t",arr[j]);
    }
    return 0;
}
void insertion_shorting(int arr[],int size)
{
    int j,temp;
    for (int i = 1; i < size; i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=temp;
    }
    
}