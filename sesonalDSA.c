#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    char data;
};

struct node *head1 = NULL, *head2 = NULL, *head3 = NULL;

struct node *create(struct node *head)
{
    struct node *temp, *newnode;
    int total;
    printf("Enter total no of nodes: ");
    scanf("%d", &total);
    for (int i = 0; i < total; i++)
    {
        printf("Enter data: ");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf(" %c", &newnode->data);
        newnode->next = NULL;
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
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void merge(struct node *head1, struct node *head2)
{
    struct node *temp1 = head1, *temp2 = head2;
    struct node *next1, *next2;
    while (temp1 != NULL && temp2 != NULL)
    {
        next1 = temp1->next;
        next2 = temp2->next;
        temp1->next = temp2;
        temp2->next = next1;
        temp1 = next1;
        temp2 = next2;
    }
}

int main()
{
    head1 = create(head1);
    head2 = create(head2);
    display(head1);
    display(head2);
    merge(head1, head2);
    display(head1);
    return 0;
}