#include<stdio.h>
#define max 3
int cenq(int[],int,int);
int cdeq(int[],int,int);
void display(int[],int ,int);
void peek(int[],int);
int main()
{
    int ch,f=-1,r=-1,cq[max];
    do
    {
        printf("\n1-Enqueue\t2-Dequeue \n3-Display\t4-Peek\n>>");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                r=cenq(cq,f,r);
                if (f==-1)
                {
                    f=0;
                }
                break;
            case 2:
                f=cdeq(cq,f,r);
                if(f==-1)
                {
                    r=-1;
                }
                break;
            case 3:
                display(cq,f,r);
                break;
            case 4:
                peek(cq,f);
                break;
            default:
            printf("INVALID CHOICE!");
            break;
        }
    } while (ch<=4);
     return 0;
}
int cenq(int cq[],int f,int r)
{
    if ((r+1)%max==f)
    {
        printf("QUEUE IS FULL");
    }
    else

    {
        int x;
        printf("ENTER THE ELEMENT YOU WANTS TO ADD IN QUEUE ::");
        scanf("%d",&x);
        r=(r+1)%max;
        cq[r]=x;
    }
    return r;
}
int cdeq(int cq[],int f,int r)
{
    int z=0;
    if(f==-1)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
        if (f==r)
        {
            z=cq[f];
            printf("\n%d",z);
            f=-1;
        }
        else
        {
            z=cq[f];
            printf("\n%d",z);
            f=(f+1)%max;
        }
    }
    return f;
}
void display(int cq[],int f,int r)
{

if (f==-1)
{
    printf("Queue is empty");
}
else
{
    while (f!=r)
    {
        printf("\n%d",cq[f]);
        f=(f+1)%max;
        // f=(f+1)%max;
    }
        printf("\n%d",cq[f]);
        // f=(f+1)%max;
}
}
void peek(int cq[],int f)
{
    if (f==-1)
    {
        printf("Queue is empty!!");
    }
    else
    {
        printf("%d",cq[f]);
    }
    
}