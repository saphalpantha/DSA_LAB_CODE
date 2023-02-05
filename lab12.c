// QN 2

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *head=NULL;
// struct node *create(struct node *head)
// {
//     struct node *temp, *newnode;
//     for (int i = 0; i < 5; i++)
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         newnode->next = 0;
//         printf("Enter data: ");
//         scanf("%d", &newnode->data);
//         if (head == NULL)
//         {
//             head = temp = newnode;
//         }
//         else
//         {
//             temp->next = newnode;
//             temp = newnode;
//         }
//     }
//     return head;
// }

// // void display(struct node *head)
// // {
// //     struct node *temp = head;
// //     while (temp != NULL)
// //     {
// //         printf("%d ", temp->data);
// //         temp = temp->next;
// //     }
// //     printf("\n");
// // }

// struct node *display(struct node *head){
//     struct node *temp = head;
//     if(temp == NULL){
//         return head;
//     }

//     printf("%d", temp->data);
//     display(temp->next);

// }

// struct node *reverse(struct node *p){

//     if(p->next == NULL){
//         head = p;
//         return head;
//     }
//     reverse(p->next);
//     struct node *q=p->next;
//     q->next = p;
//     p->next = NULL;

// }

// struct node *odd_even(struct node *head)
// {
//     struct node *odd=head, *even=head->next, *evenStart=even;
//     while(even->next!=NULL && odd->next != NULL){
//         odd->next = even->next;
//         odd = odd->next;
//         even->next = odd->next;
//         even = even->next;
//     }

//     head = reverse(head);
//     head->next = evenStart;
// }

// int main()
// {
//     struct node *head = NULL, *even, *odd;
//     head = create(head);
//     // printf("\nOrginal List\n");
//     // printf("\nEven Nodes \n");
//     head = odd_even(head);
//     head = display(head);
//     reverse(head);
//     head = display(head);
//     // odd = odd_even(head);
//     // printf("\nOdd Nodes \n");
//     // display(odd);
// }


// **************************************************************************************************************
///////////////// QN 1


// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
// 	int data;
// 	struct node *link;
// }*start = NULL;
// void create(int non_zero_element)
// {
// 	struct node *temp, *r;
// 	temp = start;
// 	if (temp == NULL)
// 	{
// 		temp = (struct node *) malloc (sizeof(struct node));
// 		temp->data = non_zero_element;
// 		temp->link = NULL;
// 		start = temp;

// 	}
// 	else
// 	{
// 		while (temp->link != NULL)
// 			temp = temp->link;
// 		r = (struct node *) malloc (sizeof(struct node));
// 		r->data = non_zero_element;
// 		r->link = NULL;
// 		temp->link = r;

// 	}
// }
// void delete(int n){
//     struct node *tmp,*q;
//     if(start->data == n){
//         tmp = start;
//         start = start->link;
//         free(tmp);
//         create(0);
//         return;
//     }
//     q = start;
//     while(q->link->link !=NULL ){
//        if(q->link->data == n){
//         tmp = q->link;
//         q->link = tmp->link;
//         free(tmp);
//         create(0);
//         return;
//     }
//     q = q->link;
//     }
//     if(q->link->data==n){
//         tmp = q->link;
//         free(tmp);
//         q->link = NULL;
//         create(0);
//         return;
//     }
// }
// void PrintList(struct node* start)
// {
// 	struct node *s;
// 	s = start;
// 	printf("Value: ");
// 	while(s != NULL)
// 	{
// 		printf("%d ", s->data);
// 		s = s->link;
// 	}
// 	printf("\n");
// }


// int main()
// {
// 	int sparseMatric[4][5] =
// 	{
// 		{1 , 2 , 3 , 4 , 5 },
// 		{0 , 0 , 5 , 7 , 0 },
// 		{0 , 0 , 0 , 0 , 0 },
// 		{0 , 8 , 6 , 0 , 0 }
// 	};
// 	for (int i = 0; i < 4; i++)
// 		for (int j = 0; j < 5; j++)
// 				create(sparseMatric[i][j]);

// 	PrintList(start);
    
//     struct node *s = start;
//     while(s->link!= NULL)
//     {
//         if((s->link->data)>(s->data))
//             delete(s->link->data);
//         s = s->link;
//     }
//     PrintList(start);
// 	return 0;
// }



// ***************************************************************************************************
// QN 2

// #include<stdio.h>
 
// #define M 6
// #define N 6
 
// void floodFillUtil(char matrix[][N], int l, int k, char prev, char new)
// {

//     if (l < 0 || l >= M || k < 0 || k >= N)
//         return;
//     if (matrix[l][k] != prev)
//         return;
 
//     matrix[l][k] = new;
 
//     floodFillUtil(matrix, l+1, k, prev, new);
//     floodFillUtil(matrix, l-1, k, prev, new);
//     floodFillUtil(matrix, l, k+1, prev, new);
//     floodFillUtil(matrix, l, k-1, prev, new);
// }
 
// int replaceSurrounded(char mat[][N])
// {

//    for (int i=0; i<M; i++)
//       for (int j=0; j<N; j++)
//           if (mat[i][j] == 'O')
//              mat[i][j] = '-';
 

//    for (int i=0; i<M; i++)  
//       if (mat[i][0] == '-')
//         floodFillUtil(mat, i, 0, '-', 'O');
//    for (int i=0; i<M; i++)  
//       if (mat[i][N-1] == '-')
//         floodFillUtil(mat, i, N-1, '-', 'O');
//    for (int i=0; i<N; i++)  
//       if (mat[0][i] == '-')
//         floodFillUtil(mat, 0, i, '-', 'O');
//    for (int i=0; i<N; i++) 
//       if (mat[M-1][i] == '-')
//         floodFillUtil(mat, M-1, i, '-', 'O');
 
//    for (int i=0; i<M; i++)
//       for (int j=0; j<N; j++)
//          if (mat[i][j] == '-')
//              mat[i][j] = '1';
 
// }
 

// int main()
// {
//     char mat[][N] =  {{'X', 'O', 'X', 'O', 'X', 'X'},
//                      {'X', 'O', 'X', 'X', 'O', 'X'},
//                      {'X', 'X', 'X', 'O', 'X', 'X'},
//                      {'O', 'X', 'X', 'X', 'X', 'X'},
//                      {'X', 'X', 'X', 'O', 'X', 'O'},
//                      {'O', 'O', 'X', 'O', 'O', 'O'},
//                     };
//     replaceSurrounded(mat);
 
 
//     for (int i=0; i<M; i++){
//         for (int j=0; j<N; j++){
//             printf("%c  ",mat[i][j]);
//         }
//     printf("\n");
//     }
//     return 0;
// }


// ************************************************************************************************





#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
};
struct node *create(struct node *start,int id){
    struct node *tmp,*q;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = id;
    tmp->link = NULL;
    if(start == NULL){
        start = tmp;
    }
    else{
        q = start;
        while(q->link!=NULL){
            q = q->link;
        }
        q->link = tmp;
    }
    return start;
}

struct node* reverse(struct node* start)
{
	struct node* q1 = start->link;
	struct node* q2 = start;
	if (q2 == NULL || q2->link == NULL)
		return q2;
	while (q1!= NULL && q1->link!= NULL) 
    {
		struct node* temp = q2;
		q2->link = temp->link;
		temp->link = q2;
		q2 = temp;
		q1 = q1->link;
	}

	q1 = start;
	while (q1 != NULL) {

		struct node* temp = q1->link;
		q1->link = q2->link;
		q2->link = q1;
		q1 = temp;
		q1 = q1->link->link;
	}

	return start;
}
void display(struct node *m){
    struct node *q;
    if(m == NULL){
        printf("List is empty ");
    }
    else{
    q = m;
    while(q!= NULL){
        printf("%d ",q->data);
        q = q->link;
    }
    }

}
void main()
{
	struct node* start = NULL;
    for(int i = 0;i<5;i++)
    {
        int x;
        scanf("%d",&x);
        start = create(start,x);
    }
    display(start);
	start = reverse(start);
	display(start);

}