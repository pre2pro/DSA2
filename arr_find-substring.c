#include<stdio.h>

void main(){
    char str[50], substr[50];
    int i, pos, len, j=0;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the starting position of the string: ");
    scanf("%d", &pos);
    printf("Enter the length of the substring: ");
    scanf("%d", &len);

    for(i=pos-1; i<pos+len-1; i++){
       substr[j]= str[i];
       j++;
    }
    substr[j]= '\0';

    printf("Substring = %s", substr);
}