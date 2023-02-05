#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *reverse_even(struct node *head)
{
    struct node *even = NULL;
    struct node *odd = head;
    if (!odd || !odd->next || !odd->next->next)
        return odd;

    while (odd && odd->next)
    {
        struct node *temp = odd->next;
        odd->next = temp->next;
        temp->next = even;
        even = temp;
        odd = odd->next;
        odd = head;
        while (even)
        {
            struct node *temp = even->next;
            even->next = odd->next;
            odd->next = even;
            even = temp;
            odd = odd->next->next;
            return head;
        }
    }
}

struct node *create(struct node *head)
{
    struct node *temp, *newnode;
    for (int i = 0; i < 10; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
        return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = create(head);
    display(head);
    head = reverse_even(head);
    display(head);
}