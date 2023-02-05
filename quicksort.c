// #include<stdio.h>
// #include <stdlib.h>

// // void swap(int *a, int *b){
// //     int temp = *a;
// //     *a = *b;
// //     *b = temp;
// // }


// // int partition(int arr[], int s, int e){
// //     int i = s-1;
// //     int pivot = arr[s];
// //     for(int j=s+1;j<e;j++){
// //         if(arr[j] <= pivot){
// //             i++;
// //             swap(&arr[i], &arr[j]);
// //         }
// //     }
// //     i++;
// //     swap(&arr[i],&pivot);
// //     return i;
// // }

// // void quickSort(int arr[], int s, int e){
// //     if(s<e){
// //         int p = partition(arr, s, e);
// //         quickSort(arr, s, p-1);
// //         quickSort(arr, p+1,e);
// //     }
// // }
// // int main() {

// //     int arr[5] = {5,4,3,2,1};
// //     int n = 10;

// //     quickSort(arr, 0, n-1);

// //     for(int i=0; i<n; i++) 
// //     {
// //         printf("%d ", arr[i]);
// //     }
// //     printf("\n");


// //     return 0;
// // }



// void merge(int arr[], int mid, int s, int e){
//     int len = e-s+1;
//     int *next = malloc(len*sizeof(int));
//     int idx1=s ,idx2=mid+1 , k=0;
//     while(idx1<=mid && idx2<=mid){
//         if(arr[idx1] <= arr[idx2]){
//             next[k++] = arr[idx1++];
//         }
//         else{
//             next[k++] = arr[idx2++];
//         }
//     }

//     // for lefted element

//     while(idx1<=mid){
//         next[k++] = arr[idx1++];
//     }
//     while (idx2<=e)

//     {
//         next[k++] = arr[idx2++];
        
//     }
//     int length = sizeof(next)/next[0];
// //  copy to original arr;
//     for(int i=0, j=s;i<length;i++, j++){
//         arr[j] = next[i];
//     }
    
    
// }

// void mergeSort(int arr[], int s, int e){
//     int mid;
//     if(s>=e){
//         return;
//     }
//     mid = s+(e-s)/2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid+1, e);
//     merge(arr, mid,  s, e);
// }

// int main(){
//     int n = 5;
//     int arr[5] = {5,4,3,2,1};
//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     mergeSort(arr, 0, n-1);
    
//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }



////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// #define SIZE 20

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[], int s, int e){
//     int tmp,i,j,pivot;
//     i = s+1;
//     j = e;
//     pivot = arr[s];

//     while(i<=j){
//         while((arr[i]<pivot) && (i<j)){
//             i++;
//         }
//         while (arr[j]>pivot)
//         {
//             j--;
//         }
//         if(i<j){
//             swap(&arr[i], arr[j]);
//             i++,j--;
//         }

//         else{
//             i++;
//         }
//         arr[s] = arr[j];
//         arr[j] = pivot;
        
//     }
//     return j;
// }

// void quickSort(int arr[], int s, int e){
//     int p;
//     if(s>=e){
//         return;
//     }
//     p = partition(arr, s,e);
//     quickSort(arr, s, p-1);
//     quickSort(arr, p+1, e );
// }

// int main(){
//     int a[SIZE] ,n=10,i;
//     for(int i=0;i<n;i++){
//         scanf("%d", &a[i]);
//     }

//     for(int i=0;i<n;i++){
//         printf("%d",a[i]);
//     }
//     printf("\n");
//     quickSort(a, 0, n-1);

//     for(int i=0;i<n;i++){
//         printf("%d",a[i]);
//     }
// }



/////////////////////////////////////// QUICK SORT REPEAT



#include <stdio.h>


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int s, int e){
    int pivot= arr[s];
    int i,j;
    i = s+1;
    j = e;
    while(i<=j){
        while((arr[i] < pivot)){
            i++;
        }

        while(arr[j] > pivot){
            j--; 
        }

        if(i<j){
            swap(arr[i], arr[j]);
        }
        else{
            i++;
        }
    arr[s] = arr[j];
    arr[j] = pivot;
    }
    return j;
}

void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int n = 5;
    int arr[5] = {5,4,3,2,1};
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    quickSort(arr,0, n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



