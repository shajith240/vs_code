#include<stdio.h>

int main(){
    int num, binary[32];

    printf("Enter the decimal number : \n");
    scanf("%d", &num);

    printf("The binary form for this number is : ");
    
    for(int i = 31 ; i >= 0 ; i--){
        int bit = (num >> i ) & 1 ;
        printf("%d",bit);
    }
    return 0;
}