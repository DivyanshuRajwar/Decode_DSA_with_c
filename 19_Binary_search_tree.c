#include <stdio.h>
#include <stdlib.h>
typedef struct binary_search
{
    int data;
    struct binary_search *left, *right;
} bst;
void insert(bst **, int);
void pre_order(bst *);
void in_order(bst *);
void post_order(bst *);
int count_node(bst *);
int count_leaf_node(bst *);
int main()
{
    bst *root = NULL;
    int value, ch, total_node = 0, total_leaf_node = 0;
    do
    {
        printf("\n1-insert\t2-pre order\n3-in order\t4-post order\n5-Count Total Node\n>>");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value:");
            scanf("%d", &value);
            insert(&root, value);
            break;
        case 2:
            pre_order(root); // N L R
            break;
        case 3:
            in_order(root); // L N R
            break;
        case 4:
            post_order(root); // L R N
            break;
        case 5:
            total_node = count_node(root);
            printf("%d", total_node);
            break;
        case 6:
            total_leaf_node = count_leaf_node(root);
            printf("%d", total_leaf_node);
            break;
        }
    } while (ch <= 6);
    return 0;
}
void insert(bst **root1, int v)
{
    bst *p = NULL;
    if (*root1 == NULL)
    {
        p = (bst *)malloc(sizeof(bst));
        p->data = v;
        p->left = NULL;
        p->right = NULL;
        *root1 = p;
        return;
    }
    else if ((*root1)->data > v)
    {
        insert(&(*root1)->left, v);
    }
    else if ((*root1)->data < v)
    {
        insert(&(*root1)->right, v);
    }
    else
    {
        printf("Doublicate element:");
    }
    return;
}
void pre_order(bst *root1) // n l r
{
    if (root1 != NULL)
    {
        printf("%d\t", root1->data);
        pre_order(root1->left);
        pre_order(root1->right);
    }
}
void in_order(bst *root1) // l n r
{
    if (root1 != NULL)
    {
        in_order(root1->left);
        printf("%d\t", root1->data);
        in_order(root1->right);
    }
}
void post_order(bst *root1)
{
    if (root1 != NULL)
    {
        post_order(root1->left);
        post_order(root1->right);
        printf("%d\t", root1->data);
    }
}
int count_node(bst *root1)
{
    if (root1 == NULL)
    {
        return 0;
    }
    if (root1 != NULL)
    {
        return (1 + count_node(root1->left) + count_node(root1->right));
    }
}
int count_leaf_node(bst *root1)
{
    if (root1 == NULL)
    {
        return 0;
    }
    else
    {
        while (root1 != NULL)
        {
            if (root1->left == NULL && root1->right == NULL)
            {
                return (1 + count_leaf_node(root1->left) + count_leaf_node(root1->right));
            }
        }
    }
}