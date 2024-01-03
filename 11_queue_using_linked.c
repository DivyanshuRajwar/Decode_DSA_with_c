#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
 int data;
 struct stack *next;
}que;
que* enq(que* r)
{
    int x;
    que*new=NULL;
    new=(que*)malloc(sizeof(que));
    if (new!=NULL)
    {
        printf("ENTER THE VALUE::");
        scanf("%d",&x);
        new->data=x;
        if (r==NULL)
        {
            r=new; 
        }
        else
        {
            r->next=new;
            r=new;
        }

        
        r->next=NULL;
    }
    
    return r;
    
}
que* deq(que* f,que*r)
{
    if (f==NULL && r==NULL)
    {
        printf("QUEUE IS EMPTY!!");
    }
    else
    {
        // que *ptr;
        // int z;
        // ptr=f;
        // z=f->data;
        // printf("\n%d",z);
        // if (f==r)
        // {
        //     f=NULL;
        // }
        // else
        // {
        //     f=f->next;
        //     free(ptr);
        // }
        que*ptr;
        ptr=f;
        printf("\n%d",f->data);
        f=f->next;
        free(ptr);
    }
    return f;
}
void display(que*f)
{
    if (f==NULL)
    {
        printf("QUEUE IS EMPTY!");
    }
    else
    {
        que* ptr;
        ptr=f;
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->next;
        }
    }
}
void peek(que* f)
{
    if (f==NULL)    
    {
        printf("QUEUE IS EMPTY!!");
    }
    else
    {
        printf("\n%d",f->data);
    }
}
int main()
{
    que* ptr=NULL,*f=NULL,*r=NULL;
    int ch;
    do
    {
         printf("\n1-ENQUEUE\t2-DEQUEQUE\n3-DISPLAY\t4-peek\n>>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                r=enq(r);
                if (f==NULL)
                {
                    f=r;
                }
                break;
            case 2:
                f=deq(f,r);
                if (f==NULL)
                {
                    r=NULL;
                }
                break;
            case 3:
            display(f);
            break;
            case 4:
            peek(f);
            break;   
                

        }
    } while (ch<=4);
    
    return 0;
}