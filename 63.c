#include <stdio.h>
#define max 10
void bubble_short(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a, j);
            }
        }
    }
}
void swap(int ar[], int j)
{
    int temp;
    temp = ar[j];
    ar[j] = ar[j + 1];
    ar[j + 1] = temp;
}
void show(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    int arr[max], n;
    printf("enter the size of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    show(arr, n);
    printf("\n");
    bubble_short(arr,n);
    
show(arr, n);
    return 0;
}