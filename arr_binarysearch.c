#include<stdio.h>

void main(){
    int i, n, first, last, mid, arr[20], item, loc=-1;

    printf("\n Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter a sorted array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the item to be searched: ");
    scanf("%d", &item);

    first = 0;
    last = n-1;
    while(first<=last){
        mid = (first + last)/2; 
        if(item==arr[mid]){
             loc = mid;
        }
        if(item > arr[mid]){
            first = mid+1;
        }
        else{
            last = mid-1;
        }
    }
    if(loc!=-1)
        printf("Item %d is found at location %d", item, loc+1);
    if(loc==-1)
        printf("Item not found in the array!!!!");
}