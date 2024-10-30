#include<stdio.h>

int fun1(int num);

int main(){

        int num;
        printf("Enter any input to access the function : \n");
        scanf("%d",&num);

        printf("The input you have entered is %d",fun1(num));
    
    return 0;
}

int fun1(int num){
    return num;
}