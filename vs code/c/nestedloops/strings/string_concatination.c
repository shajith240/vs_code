#include<stdio.h>



int main(){
    char string1[100],string2[100],string3[100];

    printf("Enter the first string : \n");
    scanf("%s",string1);

    printf("Enter the second string : \n");
    scanf("%s",string2);
    
    int length1 = 0;

    for(int i = 0 ; string1[i] != '\0' ; i++){
        length1++;
    }
    
    int length2 = 0 ;

    for(int i = 0 ; string2[i] != '\0' ; i++){
        length2++;
    }

    for(int i = 0 ; string1[i] != '\0' ; i++ ){
        string3[i] = string1[i];
    }

    for(int i = 0 ; string2[i] != '\0' ; i++){
        string3[length1 + i] = string2[i];
    }

    string3[length1 + length2] = '\0';
    
    printf("The concatenated string is %s", string3);
        
    
    return 0;
}