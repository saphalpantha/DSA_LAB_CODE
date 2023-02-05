// #include <stdio.h>
// #include <stdlib.h>


// #define max 20

// int stack[max];
// int temp[max];
// int top = -1;
// void push(int x){
//     if(top > max){
//         printf("List is  full");
//     }
//     else{
//         top++;
//         stack[top]  = x;
//     }
// }

// void display(){
//     for(int i=top;i<max;i++){
//         printf("%d ", stack[i]);
//     }
//     printf("\n");
// }





// int main(){
//     push(10);
//     push(10);
//     push(10);
//     push(10);
//     push(10);
//     push(10);
//     display();
// }


#include <stdio.h>



int main(){
int j=1;
j = ++j + j;
printf("%d ", j);

}