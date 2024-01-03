#include <stdio.h>
void slection_shorting(int arr[], int size)
{
    int min, pos;
    for (int i = 0; i < size; i++)
    {
        min = arr[i];
        pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                pos = j;
            }
        }
        if (pos != 0)
        {
            arr[pos] = arr[i];
            arr[i] = min;
        }
    }
}
int main()
{
    int arr[100], size;
    printf("Enter the size:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d elements:",i+1);
        scanf("%d", &arr[i]);
    }
    slection_shorting(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}