#include<stdio.h>

void main(){
    char str1[50], str2[50];
    int i, j;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter secoond string: ");
    gets(str2);

    i=j=0;
    while(str1[i]==str2[j] && str1[i]!= '\0'){
        i++;
        j++;
    }
    if(str1[i]==str2[j]){
        printf("both strings are equal");
    }
    else
        prrintf("The strings are not equal!!!");

}