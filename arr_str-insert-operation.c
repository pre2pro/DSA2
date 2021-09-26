#include<stdio.h>

void main(){
    char str[50], newstr[50], substr1[50];
    int i, pos, len, p=0;

    printf("\nEnter a String: ");
    gets(str);
    printf("\nEnter the substring to be inserted: ");
    gets(newstr);
    printf("\nEnter the position at which new string has to be inserted: ");
    scanf("%d", &pos);

    //copy contents of original string to new substring upto position
    for(i=0; i<pos-1; i++){
        substr1[p]=str[i];
        p++;
    }
    substr1[p] = '\0';

    printf("\nStep 1: %s", substr1);    //this is to visualize what is happenning to the string

    //concatenate the new string to substr1
    for(i=0; newstr[i]!='\0'; i++){
        substr1[p]= newstr[i];
        p++;
    }
    substr1[p] = '\0';
    printf("\nStep 2: %s", substr1);     //this is to visualize what is happenning to the string


    //copy the contents of str to substr2 from position
    for(i=pos-1; str[i]!='\0'; i++){
        substr1[p]= str[i];
        p++;
    }
     substr1[p]='\0';
    printf("\nFinal Inserted string: %s\n", substr1);       

}