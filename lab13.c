
// QN1

// SELECTION  SORT
#include <stdio.h>
void swap(int *x, int *b){
    int temp = *x;
    *x = *b;
    *b = temp;
}
// int main(){
//     int n = 10;
//     int count= 0;
//     int arr[10] = {5,2,4,6,7,2,4,5,9,0};
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] > arr[j]){
//                 swap(&arr[i], &arr[j]);
//                 count++;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("Min SWAP:  %d", count);

// }

// INSERTION sort

// QN 2
void insertionSort(int array[], int size) {
// //   for (int i = 1; i < size; i++) {
// //     int key = i;
// //     int j = i - 1;
// //     while (array[key] < array[j] && j >= 0) {
// //       swap(array[key],array[j]);
// //       j--;
//         key--;
// //     }
// //     array[j + 1] = key;
// //   }
// // }

#include <stdio.h>
void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main(){
    int n = 10;
    int arr[10] = {5,2,4,6,7,2,4,5,9,0};
    insertionSort(arr, n);

    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

// QN 3

void bubbleSort(int array[], int size) {

  for (int i = 0; i < size - 1; ++i) {

    for (int i = 0; i < size - i - 1; ++i) {

      if (array[i] > array[i + 1]) {

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// int main(){
//     int n = 10;
//     int arr[10] = {0,5,2,4,6,7,2,4,5,9};
//     bubbleSort(arr, n);

//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
// }

// QN 4;
// #include <stdio.h>
// #define SIZE 10

// void merge(int arr[], int tmp[], int low1, int up1, int low2, int up2){
//     int i = low1, j= low2, k = low1;

//     while ((i<-up1) && (j<=up2))
//     {
//         if(arr[i]<=arr[j]){
//             tmp[k++] = arr[i++];
//         }
//         else{
//             tmp[k++] = arr[j++];
//         }
//     }

//     while (i<=up1)
//     {
//         tmp[k++] = arr[i++];
//     }

//     while (j<=up2){
//      tmp[k++] = arr[j++];

//     }

// }

// void copy(int arr[], int tmp[], int low, int up){
//     int i;
//     for(i=low;i<=up;i++){
//         arr[i] = tmp[i];
//     }
// }

// void merge_sort(int arr[], int low, int up){
//     int mid;
//     int tmp[SIZE];
//     if(low<up){
//         mid = (low+up)/2;
//         merge_sort(arr, low, mid);
//         merge_sort(arr, mid+1, up);
//     }
//     merge(arr, tmp , low, mid, mid+1, up);
//     copy(arr,tmp,low,up);
// }

// int main(){
//     int i,n,arr[SIZE];
//     printf("Enter size OF ARRAY: ");
//     scanf("%d", &n);
//     printf("Enter data: \n");
//     for(i =0 ;i<n;i++){

//         scanf("%d", &arr[i]);
//     }

//     merge_sort(arr,0,n-1);
//     printf("\n***************************\n");
//     for(int i=0;i<n;i++){
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// // QN 5

// void swap(int *x, int *b)
// {
//     int temp = *x;
//     *x = *b;
//     *b = temp;
// }
// #include <stdio.h>
// int main(){
//     int n= 10;
//     char *arr[10] = {'z', 'y', 'x', 'x', 'z', 'x', 'y'};
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] > arr[j]){
//                 swap(&arr[i] , &arr[j]);
//             }
//         }

//     }
//     for(int i=0;i<n;i++){
//         printf("%c ", arr[i]);
//     }

// }

// QN 3

// #include <stdio.h>

// int total_pases=0;
// int count = 0;
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void sort_Bubble(int arr[10], int size){
//     int flag;
//     for(int i=0;i<size-1;i++){
//         flag = 0;
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(&arr[j], &arr[j+1]);
//                 count++;
//                 flag = 1;
//             }
//         }
//         total_pases++;
//         if(flag == 0){
//             break;
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
// int main(){
//     int arr[10] = {1, 5, 4, 3, 2};
//     display(arr, 5);
//     sort_Bubble(arr, 5);
//     display(arr, 5);
//     printf("total no of swaps: %d ", count );
//     printf("total no of pases: %d ", total_pases);
// }

// INSERTION SORT

// void sort_Insertion(int arr[10], int size){
//     for(int i=1;i<size;i++){
//         int temp = arr[i];
//         int j = i - 1;
//         for(; j>=0;j--){
//             if(arr[j] > temp){
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;

//     }
// }

// int main(){
//     int arr[10] = {1,0,2,4,6,3,2,1};
//     display(arr, 8);
//     sort_Insertion(arr, 8);
//     display(arr, 8);
// }

// [unsort] = [unsorted_split] [unsorted_split] => [sorted_split] [sorted_split]  => [meged_sorted];

// void merge(int arr[], int tmp[], int low1, int high1, int low2, int high2)
// {
//     int i = low1;
//     int j = low2;
//     int k = low1;
//     while ((i <= high1) && (j <= high2))
//     {
//         if (arr[i] <= arr[j])
//         {
//             tmp[k++] = arr[i++];
//         }
//         else
//         {
//             tmp[k++] = arr[j++];
//         }
//     }
//     while (i <= high1)
//     {
//         tmp[k++] = arr[i++];
//     }
//     while (j <= high2)
//     {
//         tmp[k++] = arr[i++];
//     }
// }

// void copy(int arr[], int tmp[], int low, int high)
// {
//     int i;
//     for (i = low; i <= high; i++)
//     {
//         arr[i] = tmp[i];
//     }
// }
// void mergeSort(int arr[], int low, int high)
// {
//     int mid;
//     int tmp[10];
//     if (low < high)
//     {
//         mid = (low + high) / 2;
//         mergeSort(arr, low, mid);
//         mergeSort(arr, mid + 1, high);
//     }
//     merge(arr, tmp, low, mid, mid + 1, high);
//     copy(arr, tmp, low, high);
// }

// int main()
// {
//     int arr[10] = {12, 3, 52, 1, 2, 67, 2, 3, 0, 7};
//     mergeSort(arr, 0, 9);
//     display(arr, 10);
// }

//////////////////// MIN swap

// int minimumSwaps(int arr_count, int* arr) {

// long long int i,count=0,j,temp,min,min_index;
// for(i=0;i<arr_count;i++)
// {
//     min=arr[i];
//     min_index=i;
//     for(j=i+1;j<arr_count;j++)
//     {
//         if(arr[j]<min)
//         {
//             min=arr[j];
//             min_index=j;
//         }
//     }
//     if(min_index!=i)
//     {
//         count++;
//     temp=arr[min_index];
//     arr[min_index]=arr[i];
//     arr[i]=temp;
//     }
//     }
// return count;
// }

// int main(){
//     int arr[10] = {1, 5, 4, 3, 2};
//     int min =minimumSwaps(5, arr);
//     display(arr, 5);
//     printf("Minimum Swaps Required :  %d ", min);
// }

// merge sort

// #include <stdlib.h>
// #include <stdio.h>
// // Merge Function
// void merge(int arr[], int l, int m, int r)
// {
//     int i, j, k;
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int L[n1], R[n2];
//     for (i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];
//     i = 0;
//     j = 0;
//     k = l;
//     while (i < n1 && j < n2)
//     {
//         if (L[i] <= R[j])
//         {
//             arr[k] = L[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1)
//     {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while (j < n2)
//     {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// void printArray(int A[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", A[i]);
//     printf("n");
// }

// int main()
// {
//     int arr[] = {85, 24, 63, 45, 17, 31, 96, 50};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);
//     printf("Given array is n");
//     printArray(arr, arr_size);
//     mergeSort(arr, 0, arr_size - 1);
//     printf("nSorted array is n");
//     printArray(arr, arr_size);
//     return 0;
// }







/////////////////////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>



// int main(){
    
// }