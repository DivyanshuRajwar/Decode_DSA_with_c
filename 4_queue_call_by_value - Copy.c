// Write a menu driven program to impliment the Queue  using array.(call by value)
#include <stdio.h>
#define max 20
int enq(int[], int);
int deq(int[], int, int);
void peek(int[], int);
void display(int[], int, int);
int main()
{
    int ch, f = -1, r = -1, que[max];
    do
    {
        printf("\n1-Enqueue\t2-Dequeue\n3-Peek\t\t4-Display\n>>");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            r = enq(que, r);
            if (f == -1)
                f = 0;
            break;
        case 2:
            f = deq(que, f, r);
            if (f == -1)
            {
                r = -1;
            }
            break;
        case 3:
            peek(que, f);
            break;
        case 4:
            display(que, f, r);
            break;

        default:
            printf("INVALID CHOICE!");
            break;
        }
    } while (ch <= 4);
    return 0;
}
int enq(int que[], int r1)
{
    int x;
    if (r1 == max - 1)
    {
        printf("Queue is full!");
    }
    else
    {

        printf("Enter the value::");
        scanf("%d", &x);
        r1++;
        que[r1] = x;
    }
    return r1;
}
int deq(int que[], int f1, int r1)
{
    int z = 0;
    if (f1 == -1 && r1 == -1)
    {
        printf("Queue is Empty!");
    }
    else
    {
        z = que[f1];
        printf("The dequeue iteam is %d", z);
        if (f1 == r1)
        {
            f1 = -1;
        }
        else
        {
            f1++;
        }
    }
    return f1;
}
void peek(int que[], int f1)
{
    if (f1 == -1)
        printf("Queue is empty!");
    else
    {
        printf("\n%d", que[f1]);
    }
}
void display(int que[], int f1, int r1)
{
    if (f1 == -1)
        printf("Queue is empty!");
    else
    {
        while (f1 <= r1)
        {
            printf("%d \n", que[f1]);
            f1++;
        }
    }
}