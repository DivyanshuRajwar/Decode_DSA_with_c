// Write a menu driven program to impliment the stack using array.(call by refernce )
#include<stdio.h>
#define num 20
void push(int[],int*);
void pop(int[],int*);
void peek(int[],int);
void display(int[],int);
int main()
{
    int ch,stk[num],top=-1;
    do
    {
        printf("\n1-PUSH\t2-POP\n3-PEEK\t4-DISPLAY\n>>");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push(stk,&top);
            break;
        case 2:
            pop(stk,&top);
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
void push(int stk[],int*top)
{
    int x;
    if ((*top)==num-1)
    {
        printf("Stack is full!");
    }
    else
    {
        printf("Enter the value you wants to add::");
        scanf("%d",&x);
        (*top)++;
        stk[*top]=x;
    }
}
void pop(int stk[],int*top)
{
    int z=0;
    if (*top==-1)
    {
        printf("Stack is empty!");
    }
    else
    {
        z=stk[*top];
        printf("\nThe poped element is %d",z);
        (*top)--;
    }
}
void peek(int stk[],int top)
{
if (top==-1)
{
    printf("Stack is empty!");
}
else
{
    printf("\n%d",stk[top]);
}
}
void display(int stk[],int top)
{
    if (top==-1)
    {
       printf("stack is empty!");
    }
     while (top!=-1)
        {
            printf("%d\n",stk[top]);
            top--;
        }
}