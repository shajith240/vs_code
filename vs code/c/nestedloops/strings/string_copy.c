#include<stdio.h>

int main(){
    char string1[100],string2[100];
    

    printf("Enter the first string : ");
    scanf("%s",string1);

    for(int i = 0 ; string1[i] != '\0' ; i++){
        string2[i] = string1[i];
    }

    printf("The string1 is %s and the copied string is %s",string1,string2);
    return 0;
}