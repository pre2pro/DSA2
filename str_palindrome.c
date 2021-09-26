#include<stdio.h>
#include<string.h>

void main(){
    int i, length;
    char str[20];

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for(i=0; i<length/2; i++){
        if(str[i]!=str[length-1-i]){
            printf("The given string is not a palindrome");
            break;
        }
        
        printf("The given string is a palindrome");
        break;
    }
}