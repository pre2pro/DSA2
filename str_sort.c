#include<stdio.h>
#include<string.h>

void main(){
    int n,i, flags;
    char names[50][20], temp[20];

    printf("Enter the no. of names you'd like to enter: ");
    scanf("%d", &n);

    printf("\nEnter the %d names: \n", n);
    for(i=0; i<n; i++)
        scanf("%s", names[i]);

    for(i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            flags = strcmp(names[j], names[j+1]);
            if(flags>0){
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    printf("\n Sorted List: ");
    for(i=0; i<n; i++)
        printf("\n %d. %s", i+1,names[i]);

}