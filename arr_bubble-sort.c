#include<stdio.h>

print(int a[], int n);
sort(int a[], int n);

void main(){

    int b[20], i,n;

    printf("\n Enter the size of the array: ");
    scanf("%d", &n);

    printf("\n Enter the elements of the array to be sorted: ");
    for(i=0; i<n; i++){
        scanf("%d", &b[i]);
    }

    printf("\n Original Array: ");
    print(b,n);

    sort(b,n);
    printf("\n Sorted Array: ");
    print(b,n);

}

sort(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return;
}

print(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    return;
}