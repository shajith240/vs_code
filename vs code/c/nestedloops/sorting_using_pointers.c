#include<stdio.h>

void sortedarray(int *arr,int n);

int main(){
    int arr[100],n;
    printf("Enter the number of elements in the array : \n");
    scanf("%d",&n);

    printf("Enter the elements : \n");
    for (int i = 0 ; i < n ; i++){
        scanf("%d",arr + i );
    }
    sortedarray(arr,n);
    return 0;
}

void sortedrray(int *arr, int n ){
    for(int i = 0; i < n -1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(*(arr + i ) > *(arr + j)){
                int temp = *(arr + i );
                *(arr + i ) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}