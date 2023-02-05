#include <stdio.h>

typedef struct{
    int day;
    int month;
    int year;
} Date;


void swap(Date* a, Date*b){
    
}

void bubble_sort(Date *arr, int size){
    int i, j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size - i - 1; j++){
            if(arr[j].year > arr[j+1].year){
                swap(&arr[j], &arr[j+1]);
            }
            else if(arr[j].year == arr[j+1].year){
                if(arr[j].month > arr[j+1].month){
                    swap(&arr[j], &arr[j+1]);
                }
                else if(arr[j].month == arr[j+1].month){
                    if(arr[j].day > arr[j+1].day){
                        swap(&arr[j], &arr[j+1]);
                    }
                }
            }
        }
    }
}

void display(Date* arr, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d-%d-%d\n", arr[i].day, arr[i].month, arr[i].year);
    }
}
int main(){
    int i, n;
    printf("Enter number of dates to sort: ");
    scanf("%d", &n);
    Date arr[n];
    
    for(i=0; i < n; i++){
        printf("\nFor %d date: \n", i+1);
        scanf("%d", &arr[i].day);
        scanf("%d", &arr[i].month);
        scanf("%d", &arr[i].year);
    }
    printf("\n");
    display(arr, n);
}