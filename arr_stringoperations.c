//Menu Driven Program for implementing string operations without using string functions

#include<stdio.h>

void main(){
    char str1[100], str2[100];
    int i,n;

    printf("\n Menu ");
    printf("***************************");
    printf("\n1. String Length");
    printf("\n2. String Concatenation");
    printf("\n3. String Reverse");
    printf("\n4. Exit");

    printf("\nEnter Your choice: ");
    scanf("%d", &n);
    switch(n){
    case 1: printf("\nEnter a string: ");
            scanf("%s", str1);
            printf("\n Length of the string is %d", LENGTH(str1));
            break;
    case 2:printf("\nEnter First String: ");
            scanf("%s", str1);
            printf("\nEnter second String: ");
            scanf("%s", str2);
            CONCAT(str1, str2);
            printf("\nConcatenated String: %s", str1);
            break;
    case 3:printf("\nEnter a string: ");
            scanf("%s", str1);
            REVERSE(str1);
            printf("\nReversed String: %s", str1);
            break;
    case 4:exit(0);
    default: printf("\nInvalid Option!!!");
    }
}

int LENGTH(char *str){
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}

void CONCAT(char *first, char *second){
    int i=0, j=0;

    while(first[i]!='\0'){
        i++;
    }
    while(second[j]!='\0'){
        first[i]=second[j];
        i++;
        j++;
    }
    first[i]='\0';

}

void REVERSE(char *str){
    char temp;
    int i=0, j=LENGTH(str)-1;

    while (i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

}