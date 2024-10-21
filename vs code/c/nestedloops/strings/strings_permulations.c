#include<stdio.h>

int main(){
    char string[100],string1[100],string2[100];

    printf("Enter the string : ");
    fgets(string, sizeof(string), stdin);
    int length = sizeof(string) / sizeof(string[0]);
 

   for(int i = 0 ; i < length -1 ; i++){
    string1[i] = string[i];
   }
   string1[length] = '\0';

    for(int i = 0 ; string1!= string2;i++){
        
        for(int j = 0 ; j < length-1 ; j++){
            string1[j] = string1[length - j - 1];
        }

        printf("%s",string1);

    }
    return 0;
}