#include<stdio.h>
// #define max 5 
int main()
{
    int max,ce=0,co=0;
    printf("Enter the size of araay::");
    scanf("%d",&max);
    int arr[max];
    for (int  i = 0; i < max; i++)
    {
        printf("Enter the elements in array[%d]::",i);
        scanf("%d",&arr[i]);
    }
    
    // for (int i = 0; i < max; i++)
    // {
    // }
    for (int i = 0; i < max; i++)
    {
        if (arr[i]%2==0)
        {
            ce++;
        }
        else 
        co++;
    }
    printf("Total number of Even is %d\nTotal number of odd is %d",ce,co);
  return 0;
}