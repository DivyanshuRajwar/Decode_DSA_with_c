// write a menu driven program to impliment a simple stack using array (call by value).
#include<stdio.h>
#define max 20

int push(int[],int);
int pop(int[],int);
void peek(int[],int);
void display(int[],int);
int main()
{
    int ch,top=-1,stk[max];
    do
    {
        printf("\n1-PUSH\t2-POP\n3-PEEK\t4-DISPLAY\n>>");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            top=push(stk,top);
            break;
        case 2:
            top=pop(stk,top);
            break;
        case 3:
            peek(stk,top);
            break;
        case 4:
            display(stk,top);
            break;
        default:
         printf("INVALID CHOICE!");
            break;
        }
    } while (ch<=4);
     return 0;
}
int push(int stk[],int top)
{
    int x;
    if (top==max-1)
    {
        printf("Stack is full!");
    }
    else
    {
        printf("Enter the value you wants to add ::");
        scanf("%d",&x);
        top++;
        stk[top]=x;
    }
    return top;
}
int pop(int stk[],int top)
{
    int z=0;
    if (top==-1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        z=stk[top];
        printf("\nThe poped iteam is %d",z);
        top--;
    }
    return top;
}
void peek(int stk[],int top)
{
    if (top==-1)
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("%d",stk[top]);
    }
}
void display(int stk[],int top)
{
    if(top==-1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        while (top!=-1)
        {
            printf("%d\n",stk[top]);
            top--;
        }
    }
}