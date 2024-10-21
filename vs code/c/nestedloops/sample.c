#include<stdio.h>
#include<stdbool.h>

int main(){
    char arr[30] = {'s' ,'h', 'j'};
    // printf("Enter the array that you want to  reverse: \n");
    // scanf("%s", arr);
    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = length; i >=0; i--){
         printf("%c",arr[i - 1]);
    }
   

    return 0;
}