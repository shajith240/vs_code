#include<stdio.h>

int main(){
    int num;


    printf("Enter the number : ");
    scanf("%d",&num);


    for(int i = 0 ; i < num ; i++){

         
        for(int j = 0 ; j<= i ; j++ ){

               if(i % 2 == 0){
                
                        for(int j = 0 ; j<=i ; j++){

                            if(j % 2 == 0){
                                printf("1 ");
                            }
                            else{
                                printf("0 ");
                            }
                        }
                        break;

               }

               else{

                for(int j = 0 ; j<=i ; j++){

                            if(j % 2 == 0){
                                printf("0 ");
                            }
                            else{
                                printf("1 ");
                            }
                        }
                        break;
               }

        }
        printf("\n");
    }
    return 0;
    }