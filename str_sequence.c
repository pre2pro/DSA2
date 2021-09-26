#include<stdio.h>

void main(){
    int i,j;
     char str[]= "Bangalore";

    for(i=0; str[i]!='\0'; i++){
        j=i+1;
        printf("%-10.*s\n",j,str);
    }

    // for(i=0; i<10; i++){                       //printing the array using traverse
    //     printf("%c", str[i]);
    // }
    //     printf("%s", str);                      //printing the array without traversing using string
}