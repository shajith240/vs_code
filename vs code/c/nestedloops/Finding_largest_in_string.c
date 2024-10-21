#include<stdio.h>

int main(){
    int num[100],max,min,n;

    printf("Enter the number of elements : \n");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for(int i = 0 ;i < n ; i++){
        printf(" %d.Element : ",i+1);
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];

    for(int i = 1 ; i < n ; i++){
        if(num[i] > max){
            max = num[i];
        }
        if(num[i] < min){
            min = num[i];
        }
    }

    printf("The largest element is %d\n",max);
    printf("The smallest element is %d\n",min);
    return 0;
}