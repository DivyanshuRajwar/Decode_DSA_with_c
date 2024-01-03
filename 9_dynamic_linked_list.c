#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list
{
    int data;
    struct node *next;
} node;
int main()
{
    node *head = NULL, *newNode = NULL, *temp = NULL;
    int x, ch = 1;
    while (ch)
    {
        newNode = (node *)malloc(sizeof(node));
        printf("\nENTER THE VALUE::");
        scanf("%d", &x);
        newNode->data = x;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("\n0-break\t1-continue\n>>");
        scanf("%d", &ch);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
    return 0;
}