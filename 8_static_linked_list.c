#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
    int data;
    struct node *next;
}node;
// void count_node( node *ptr)
// {
//     int count=0;
//     node *p=NULL;
//     p=ptr;
//     while (p->next!=NULL)
//     {
//         count++;
//         p=p->next;
//     }
//     printf("\n%d",count);
// }

int main()
{
     node a,b,c,*d,*ptr=NULL;
    a.data=10;
    d=( node*)malloc(sizeof( node));
    // a->data=200;
    // d->data=80;
    d->data=40;
    b.data=20;
    c.data=30;
    ptr=&a;
    a.next=&b;
    
    b.next=&c;
    c.next=d;//bcz d is a pointer which have a memory allocated by heap.

    d->next=NULL;
    while (ptr!=NULL)
    {
        printf("|%d|%d|->",ptr->data,ptr->next);
        ptr=ptr->next;
    }
    // printf("\n%d",a.next);This is address of b store in next of a.
    // printf("\n%d",&b);//this is the real address of b.
    count_node(ptr);
    return 0;
}