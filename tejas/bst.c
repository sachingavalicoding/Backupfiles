
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(struct node *, int);
int main()
{
    struct node *root = NULL;
    char ch;
    int item;
    root = NULL;
    do
    {
        printf("Enetr the data for node::");
        scanf("%d", &item);
        root = create(root, item);
        printf("Do you want to insert to add element in node:: ");
        scanf("%d", &ch);
    } while (ch == 'y' || ch == 'Y');
    printf("***BST IS CREATE***");
}
struct node *create(struct node *root, int item)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->left = root->right = NULL;
        root->data = item;
        return root;
    }
    else
    {
        if (item < root->data)

        {
            printf("%d::inserted to left of :: %d\n", item, root->data);
            root->left = create(root->left, item);
        } 
        else if (item > root->data)

        {
            printf("%d::inserted to right of::%d\n", item, root->data);
            root->right = create(root->right, item);
        }
        else

            printf("Duplicate number is not allowed !!!");
        return (root);
    }
}
