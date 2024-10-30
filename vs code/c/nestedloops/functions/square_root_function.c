#include<stdio.h>


int square_fun(int a);
int main(){
    int num;
    printf("Enter a number to find it's square root : \n");
    scanf("%d",&num);
    printf("Square of the given number is %d",square_fun(num));
    return 0;
}

int square_fun(int a){
    return a*a;
}