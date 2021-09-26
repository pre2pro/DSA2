#include<stdio.h>


void main(){
    int i, arr[20],item,n, loc=-1;

    printf("Enter the size of the Array: ");
    scanf("%d", &n);

    printf("\n Enter the Elements of the Array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\n enter the item to be searched: ");
    scanf("%d", &item);

    for(i=0; i<n; i++){
        if(arr[i]==item)
            loc=i;
    }
        if(loc!=-1)
            printf("\nItem %d found at location %d", item, loc+1);
        if(loc==-1)
            printf("\nItem not found in the Array");
}