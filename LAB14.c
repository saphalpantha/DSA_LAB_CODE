
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

// void display(struct node *head)
// {
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void Sort(struct node *head){
//     struct node *i=head,*j=i->next;
//     for(i=head;i!=NULL;i=i->next){
//         for(j=i->next;j!=NULL;j=j->next){
//             swap(&i->data,&j->data);
//         }
//     }
// }

// int main(){
//     head = create(head);
//     display(head);
//     Sort(head);
//     printf("After Sorting\n");
//     display(head);
// }

///////////////////////////// QN 3

// #include <stdio.h>

// int k=0;
// int count = 0;
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void sortA(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
// }
// void sortD(int arr[], int low, int high){
//     for(int i=low; i<high;i++){
//         for(int j=i+1;j<high;j++){
//             if(arr[i] < arr[j]){
//                 swap(&arr[i], &arr[j]);
//             }
//         }
//     }
// }

// void display(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void split(int arr1[], int arr2[] , int size){
//     for(int i=0;i<size;i++){
//         if(i%2 == 0){
//             arr2[k] = arr1[i];
//             k++;
//             count++;
//         }

//     }

//     for(int i=0;i<size;i++){
//         if(i%2!= 0){
//             arr2[k] = arr1[i];
//             k++;
//         }
//     }

//     for(int i=0;i<size;i++){
//         arr1[i] = arr2[i];
//     }
// }
// int main(){
//     int max = 10;
//     int arr2[10];
//     int arr[10] = {5,200,12,34,56,1,4,399,56,299};
//     split(arr, arr2, 10);
//     display(arr, 10);
//     sortA(arr, 0,count );
//     sortD(arr, count,max-1);
//     display(arr, max);

// }

// 5 12 56 4 = __even_pos_num

// 4 5 12 56

// 200 34 1 399 299= odd_pos_num
// 399 299 200 34 1

///////////////////////////////
// #include <stdio.h>

    // void out_range(int arr[], int size){
    //     int arr2[size];
    //     printf("\n %d \n" ,size );
    //     sortA(arr, 0, size);
    //     display(arr, 10);
    //     // printf("\n %d " , );
    //     // create an array with 1 increment
    //     for(int i=0;i<size;i++){
    //         arr2[i] = i;
    //     }

    //     for(int i=0;i<size;i++){
    //         if(arr[i] != arr2[i]){
    //             printf("%d ", arr2[i]);
    //         }
    //     }
    // }

    // int main(){
    //     int arr[10] = {1,10,20,30,40,50,90,100};
    //     out_range(arr, 10);
    // }

#include <stdio.h>
#define max 5
void out_range(int arr[max], int low, int high)
    {
        int size;
        sortA(arr, max);
        size = high - low + 1;
        int a = 0;
        for (int i = low; i < low + size; i++)
        {
            if (arr[a] == i)
                a++;

            else
                printf("%d\t", i);
        }
    }
    int main()
    {
        // int arr[4] = {10, 12, 11, 15};
        int arr1[5] = {1, 14, 01, 51, 95};
        out_range(arr1, 1, 9);
    }