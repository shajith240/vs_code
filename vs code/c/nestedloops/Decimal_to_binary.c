#include<stdio.h>

int main(){
    int num;
    int binary[32],index = 0;
    printf("Enter a decimal number : \n");
    scanf("%d",&num);
    

    while(num > 0){
        binary[index++] = num % 2;
        num /= 2;
    }

    for(int i = index - 1 ; i >=0 ; i--){
        printf("%d",binary[i]);
    }
    return 0;
}