#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;

}node;
void disPlay(node* temp)
{
    while (temp!=NULL)
    {
        printf("|%d|%d|->",temp->data,temp->next);
        temp=temp->next;
    }
}
node* add_in_front(node* temp)
{
    node* new_node;
    new_node=(node*)malloc(sizeof(node));
    printf("\nENTER THE VALUE YOU WANT TO ADD IN FRONT::");
    scanf("%d",&new_node->data);
    new_node->next=temp;
    temp=new_node;
    return temp;
}
void add_in_last(node* temp)
{
    node* new_node=NULL;
    new_node=(node*)malloc(sizeof(node));
    printf("\nENTER THE VALUE YOU WANT TO ADD IN LAST::");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
int main()
{
    node *new_node=NULL,*temp=NULL,*head=NULL;
    int ch=1;
    while (ch)
    {
        new_node=(node*)malloc(sizeof(node));
        printf("ENTER TEH VALUE::");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if (head==NULL)
        {
            temp=head=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        printf("1-continue\t0-stop\n>>");
        scanf("%d",&ch);
    }
    temp=head; 
    disPlay(temp);
    head=add_in_front(head);
    disPlay(head);  
    add_in_last(head);
    disPlay(head);  
    return 0;
}