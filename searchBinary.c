// #include <stdio.h>

// int binarySearch(int arr[], int s, int e, int data)
// {
//     int mid;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if (arr[mid] == data)
//         {

//             return mid;
//         }
//         else if (arr[mid] > data)
//         {
//             e = mid - 1;
//         }
//         else if (arr[mid] < data)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             mid = (s + e) / 2;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int ans = binarySearch(arr, 0, 9, 8);
//     if (ans == -1)
//     {
//         printf("Not found\n");
//     }
//     else
//     {
//         printf("on %d index", ans);
//     }
// }




/// Binary sEARCH USING RECURISON


int  binarySearch(int arr[], int s, int e, int data){
    int mid;
    if(s>=e){
        return -1;
    }
    else{
        mid = (s+e)/2;
        if(arr[mid] == data){
            return mid;
        }
        else if(arr[mid] > data){
            return binarySearch(arr, s, mid-1, data);
        }
        else if(arr[mid] < data){
            return binarySearch(arr, mid+1, e,data);
        }
        else{
            return -1;
        }
    }
}


#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ans = binarySearch(arr, 0, 9, 5);
    if(ans == -1){
        printf("Not found");

    }
    else{
        printf("data found at %d ", ans);
    }
    return 0;
}