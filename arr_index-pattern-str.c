#include<stdio.h>

void main(){
    char str[50], pat[50];
    int i=0, j, pos, len, k=0;

    printf("Enter a string: ");
    gets(str);
    printf("Enter the pattern: ");
    gets(pat);

    while(str[i]!='\0'){
            j=1;
        if(str[i]==pat[0]){
            while(pat[j]!='\0' && str[i+j]!= '\0' && pat[j]==str[j+i]){
                j++;
                k=1;
            }
        }
        if(pat[j]=='\0'){
                printf("\n pattern `%s` is found at location %d", pat, i+1);
        }


        i++;

    }

    if(k==0)
        printf("pattern `%s` not found in the string `%s`", pat, str);
        

}