#include<stdio.h>
#include<string.h>

void main(){
    int i,c=0,v=0,s=0, x=0;
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++){
        switch(str[i]){
            case 'a' : 
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' : 
            case 'A'  :
            case 'E'  :
            case 'I'  :
            case 'O'  :
            case 'U'  : v++;
            break;
            case '+' :
            case '-' :
            case '*' :
            case '/' : 
            case '.' :
            case ',' : s++;
            break;
            case ' ': x++;
            break;
            default : c++;
        }
    }
    printf("\nNo. of consonants: %d", c);
    printf("\nNo. of vowels: %d", v);
    printf("\nNo. of special Symbols: %d", s);
}