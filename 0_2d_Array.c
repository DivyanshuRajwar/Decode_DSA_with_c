#include<stdio.h>
int main()
{
//    int arr[3][2]={10,20,30,40,50,60};
    int arr[2][2];
    printf("Enter the elemenets:");
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d",arr[i][j]);
            }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <2; j++)
        {
                printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}