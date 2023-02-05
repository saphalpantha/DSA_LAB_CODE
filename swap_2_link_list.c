#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head1=NULL;
struct node *head2=NULL;
struct node *head3=NULL;
struct node *create(struct node *head)
{
    struct node *temp, *newnode;
    for (int i = 0; i < 5; i++)
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


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_data_between_two_link_list(struct node *head1, struct node *head2){
    struct node *i=head1, *j=head2;
    for(;i!=NULL;i=i->next){
            swap(&i->data, &j->data);
            j = j->next;
    }
}

int main(){
    head1 = create(head1);
    display(head1);
    head2 = create(head2);
    display(head2);
    swap_data_between_two_link_list(head1, head2);
    printf("\nAFter swapping\n");
    display(head1);
    display(head2);


    
    
}