#include <stdio.h>
#include <math.h>


int num;

void findpyth(int n){
    int a,b,c;
    for(a = 1; a<=num;a++){
        for(b = a ; b<=num;b++){
           c = (int)sqrt(a*a + b*b);
           if(c * c == a*a + b*b && c <=num){
            printf("%d %d %d ",a,b,c);
           }
        }
    }

    }

int main(){
    // printf("Enter the range : \n");
    // scanf("%d",&num);
    num = 20;
    findpyth(num);
    return 0;
}

