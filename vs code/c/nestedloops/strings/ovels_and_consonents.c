#include<stdio.h>

int main(){
    char string[100];
    printf("Enter a string : \n");
    scanf("%99s",string);
    int vowelcount = 0 ,consonentcount = 0;
    for(int i = 0 ; string[i] != '\0' ; i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            vowelcount++;
        }
        else{
            consonentcount++;
        }
    }

    printf("In the string %s you have entered their are %d  vowels and %d consonants\n",string,vowelcount,consonentcount);
    return 0;
}