#include<stdio.h>

int num;
void diamond(int n ){
    for(int i = 1 ; i <=num ; i++){
        for(int j = 1 ; j <= num - 1 ; j++){
            printf(" ");
        }
        for(int k = 1 ; k <= 2 * i - 1; k++){
            printf("*");
        }
    }
}
int main(){
    printf("Enter the number of rows needed : \n");
    scanf("%d",&num);
    diamond(num);
}