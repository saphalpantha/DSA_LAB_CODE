// QN 1

// #include <stdio.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *root=NULL;

// struct node  *insert(struct node *root, int x){
//     struct node *newnode=(struct node *)malloc(sizeof(struct node));
//     newnode->left = 0;
//     newnode->right = 0;
//     newnode->data = x;
//     if(root == NULL){
//         root = newnode;
//     }
//     if(x == -1){
//         return root;
//     }
//     else{
//         if(x < root->data){
//             root->left=insert(root->left, x);
//         }
//         else if(x > root->data){
//             root->right = insert(root->right,x);
//         }

//     }
//     return root;
// }

// void inorder(struct node *root){
//     if(root == NULL){
//         return;
//     }
//     else{
//         inorder(root->left);
//         printf("%d " , root->data);
//         inorder(root->right);
//     }
// }


// void preorder(struct node *root){
//     if(root == NULL){
//         return;
//     }
//     else{
//         printf("%d " , root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void postorder(struct node *root){
//     if(root == NULL){
//         return;
//     }
//     else{
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d " , root->data);
//     }
// }

// void get_nodes_from_range(struct node *root, int low, int high){
//     if(root == NULL){
//         return;
//     }
//     else{
//         get_nodes_from_range(root->left, low, high);
//         if(root->data >= low && root->data <=high ){
//             printf("%d ", root->data);
//         }
//         get_nodes_from_range(root->right, low , high);
//     }
// }

// int main(){
//     int d;
//     int key;
//     printf("\n");
//     while(d != -1){
//         printf("Enter data " );
//         scanf("%d", &d);
//         root=insert(root, d);
//     }
//     printf("\n");

//     inorder(root);
//     printf("\n");
//     preorder(root);
//     printf("\n");
//     postorder(root);
//     printf("\n");
//     get_nodes_from_range(root, 100,500);
//     return 0;
// }

// QN 2


#include <stdio.h>    
int  row,col;
int arr1[10][10];
int arr2[10][10] = {0,0,0,0,0,0,0,0,0};
int arr3[10][10];
void create_array(){
    printf("Enter no of rows: ");
    scanf("%d", &row);
    printf("Enter no of columns: ");
    scanf("%d", &col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &arr1[i][j]);
        }
    }
}



void display(int arr[10][10]){
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
        printf("\n*****************************************\n");
}

int  main ()    

{   
    create_array();
    printf("\n printing the elements ....\n");     
    display(arr1);
    display(arr2);

    for(int i=0;i<row;i++){
        int k = 1;
        for(int j=0;j<col;j++){
            if(arr1[i][j] < arr1[i][k]){
                arr2[i][k] = 1;
            }
            k++;
        }
    }

    display(arr2);
    for(int i=0;i<row;i++){
        for(int j= 0;j<col;j++){
            if(arr2[i][j] != 1){
                arr3[i][j] = arr1[i][j];
            }
        }
    }
    display(arr3);
    
    
}    


