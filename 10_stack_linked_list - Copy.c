//write a c program to impliment stack using linked list (using single pointer call by value )
#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
 int data;
 struct stack *next;
}stk;
 stk* push(stk*);
 stk* pop(stk*);
void  disPlay(stk*);
void  peek(stk*);

int main()
{
    stk *top=NULL;
    int ch;
    do
    {
        printf("\n1-PUSH\t2-POP\n3-PEEK\t4-DISPLAY\n>>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            top=push(top);
            break;
            case 2:
            top=pop(top);
            break;
            case 3:
            peek(top);
            break;
            case 4:
            disPlay(top);
            break;
        }
    } while (ch<=4);
    return 0;
} 
stk* push(stk* top)
{
    stk* new=NULL;
    int x;
    new=(stk*)malloc(sizeof(stk));
    if (new!=NULL)
    {
        printf("ENTER THE VALUE::");
        scanf("%d",&x);
        new->data=x;
        new->next=top;
        top=new;
    }
    return top;
}
stk* pop(stk* top)
{
    stk* ptr;
    if (top==NULL)
    {
        printf("STACK IS EMPTY!!");
    }
    else
    {
        ptr=top;
        printf("THE POPED ELEMENT IS %d",ptr->data);
        top=top->next;
        free(ptr);
    }
 return top;   
}
void disPlay(stk* top)
{
    if (top==NULL)
    {
        printf("STACK IS EMPTY!!");
    }
    else
    {
        while (top!=NULL)
        {
            printf("%d\t",top->data);
            top=top->next;
        }
        
    }
}
void peek(stk* top)
{
    if (top==NULL)
    {
        printf("STACK IS EMPTY!!");
    }
    else
    {
        printf("\n%d",top->data);
    }

}