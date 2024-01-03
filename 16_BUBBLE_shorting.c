#include<stdio.h>
#define max 100
void b_short(int [],int);
int main()
{
    int num[max],size;
    printf("ENTER THE SIZE OF ARRAY ::");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("ENTER %d ELEMENT::",i+1);
        scanf("%d",&num[i]);
    }
    b_short(num,size);
    for (int j = 0; j < size; j++)
    {
        printf("%d\t",num[j]);
    }
    return 0;
}
void b_short(int arr[],int size)
{
    int temp;
    for (int i = 0; i < size-1; i++)//number of passes
    {
        for (int j = 0; j < size-1-i; j++)//number of exchanges
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}