#include<stdio.h>
#define max 10
void enq(int[],int*,int*);
void  deq(int[],int*,int*);
void  disPlay(int[],int,int);
void peek(int[],int);
int main()
{
    int cque[max],ch,f=-1,r=-1;
    do
    {
        printf("\n1-ENQUEUE\t2-DEQUEQUE\n3-DISPLAY\t4-PEEK\n>>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enq(cque,&f,&r);
            if (f==-1)
            {
                f=0;
            }
            break;
            case 2:
            deq(cque,&f,&r);
            if (f==-1)
            {
                r=-1;
            }
            break;
            case 3:
            disPlay(cque,f,r);
            break;
            case 4:
            peek(cque,f);
            default:
             printf("INVALID CHOICE!");
             break;
        }
    } while (ch<=4);
    return 0;
}
void enq(int cq[],int *f,int *r)
{
    int x;
    if ((*r+1)%max==*f)
    {
        printf("CIRCULAR QUEUE IS FULL!!");
    }
    else
    {
        printf("ENTER THE VALUE ::");
        scanf("%d",&x);
        *r=(*r+1)%max;
        cq[*r]=x;

    }
}
void deq(int cq[],int *f,int*r)
{
    if (*f==-1 && *r==-1)
    {
        printf("QUEUE IS EMPTY!!");
    }
    else
    {
       int z=0;
       if (*f==*r)
       {
        z=cq[*f];
        printf("\n%d",z);
        (*f)=-1;
       }
       else
       {
            z=cq[*f];
            printf("\n%d",z);
            *f=(*f+1)%max;
       }
       
    }
}
void disPlay(int cq[],int f,int r)
{
    if (f==-1 &&r==-1)
    {
        printf("QUEUE IS EMPTY!");
    }
    else
    {
         while (f<=r)
         {
            printf("\n%d",cq[f]);
            f++;
         }
    }
}
void peek(int cq[],int f)
{
    if (f==-1 )
    {
        printf("QUEUE IS EMPTY!");
    }
    else
    {
        printf("\n%d",cq[f]);
    }
}