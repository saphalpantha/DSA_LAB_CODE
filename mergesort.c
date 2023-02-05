// #include <stdio.h>





// void copy(int arr1[], int arr2[], int size){
//     for(int i=0;i<size;i++){
//         arr1[i] = arr2[i];
//     }
// }
// void merge(int arr[], int s, int e){
//     int mid = (s+e)/2;

//     int len1 = mid-s+1;
//     int len2 = e-mid;
//     int arr1[len1];
//     int arr2[len2];

//     copy(arr1,arr, len1);

//     for(int i=0;i<5;i++){
//         printf("%d ", arr1[i]);
//     }
//     printf("\n");
//     copy(arr2,arr, len2);

//     for(int i=0;i<5;i++){
//         printf("%d ", arr2[i]);
//     }
//     printf("\n");
    

//     int idx1=0;
//     int idx2 = 0;
//     int k = s;
//     while(idx1<len1 && idx2<len2){
//         if(arr1[idx1] < arr2[idx2]){
//             arr[k++] = arr1[idx1++]; 
//         }
//         else{
//             arr[k++] = arr2[idx2++];
//         }
//     }

//     while(idx1<len1){
//             arr[k++] = arr1[idx1++]; 
        
//     }
//     while(idx2<len2){
//             arr[k++] = arr2[idx2++];
//     }
    
// }
// void mergeSort(int arr[], int s, int e){
//     if(s>=e){
//         return;
//     }
//     int mid = (s+e)/2;
//     mergeSort(arr,s,mid-1);
//     mergeSort(arr,mid+1, e);
//     merge(arr, s, e);

// }

// int main(){
//     int arr[5] = {5,4,3,2,1};
    
//     mergeSort(arr, 0 ,1);
//     for(int i=0;i<5;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

// }


////////////////////////////////////////////



/* Merge sort in C */
#include<stdio.h>
#include<stdlib.h>

// Function to Merge Arrays L and R into A. 
// lefCount = number of elements in L
// rightCount = number of elements in R. 
void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

// Recursive function to sort an array of integers. 
void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing. 

	mid = n/2;  // find the mid index. 

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array 
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
        free(L);
        free(R);
}

int main() {
	/* Code to test the MergeSort function. */
	
	int A[] = {6,2,3,1,9,10,15,13,12,17}; // creating an array of integers. 
	int i,numberOfElements;

	// finding number of elements in array as size of complete array in bytes divided by size of integer in bytes. 
	// This won't work if array is passed to the function because array
	// is always passed by reference through a pointer. So sizeOf function will give size of pointer and not the array.
	// Watch this video to understand this concept - http://www.youtube.com/watch?v=CpjVucvAc3g  
	numberOfElements = sizeof(A)/sizeof(A[0]); 

	// Calling merge sort to sort the array. 
	MergeSort(A,numberOfElements);

	//printing all elements in the array once its sorted.
	for(i = 0;i < numberOfElements;i++) printf("%d ",A[i]);
	return 0;
}