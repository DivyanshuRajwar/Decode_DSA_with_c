#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;
} node;
int main()
{
    node *new_node=NULL,*temp=NULL,*head=NULL;
    int ch = 1;
    while (ch)
    {
        new_node=(node*) malloc(sizeof(node));
        printf("ENTER VALUE::");
        scanf("%d",&new_node->data);
        new_node->next=head;
        head=new_node;
        printf("1-continue\t2-stop\n>>");
        scanf("%d",&ch);
    }
    temp=head;
    while (temp!=NULL)
    {
        printf("|%d|%d|<-",temp->data,temp->next);
        temp=temp->next;
    }
  
}