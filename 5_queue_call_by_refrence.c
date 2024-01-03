#include <stdio.h>
#define max 10
void eq(int[], int *);
void dq(int[], int *, int *);
void display(int[], int, int);
void peek(int[], int);
int main()
{
    int f = -1, r = -1, ch, q[max];

    do
    {
        printf("\nf=%d\tr=%d",f,r);
        printf("\n1-enqueue\t\t2-dequeue\n3-display\t\t4-peek\n\t\t5-stop!\n->");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            eq(q, &r);
            if (f == -1)
                f = 0;

            break;
        case 2:
            dq(q, &f, &r);
            if (f == -1)
            {
              r=-1;
            }

            break;
        case 3:
            display(q, r, f);
            break;
        case 4:
            peek(q, f);
            break;

        default:
            printf("INVALID CHOICE!");
            break;
        }
    } while (ch <= 4);
}
void eq(int q[], int *r)
{
    if (*r == max - 1)
        printf("Queue is full!!");
    else
    {
        int x;
        printf("Enter the value:: ");
        scanf("%d", &x);
        (*r)++;
        q[*r] = x;
    }
}
void dq(int q[], int *f, int *r)
{
    int z = 0;
    if ((*f )== -1 && (*r) == -1)
    {
        printf("Queue is empty!!");
    }
    else
    {
        z = q[*f];
        printf("the dequeue element is %d", z);
        if(*f==*r)
        {
            (*f) = -1;
        }
        else
        {
            (*f)++;
        }
    }
}
void display(int q[], int r, int f)
{
    if (f == -1)
        printf("Queue is full!!");
    else
    {
        while (f <= r)
        {
            printf("\n%d", q[f]);
            f++;
        }
    }
}
void peek(int q[], int f)
{
    if (f == -1)
        printf("Queue is empty!!");
    else
    {
        printf("%d", q[f]);
    }
}