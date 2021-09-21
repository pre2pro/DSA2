#include<stdio.h>

void main(){
    int a[10][10], b[10][10], sum[10][10], i,j,n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
//a
    printf("Enter the Elements of the matrix a of size %d x %d", n,n);
    for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                scanf("%d", &a[i][j]);
        }
//b
    printf("Enter the Elements of the matrix b of size %d x %d", n,n);
    for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                scanf("%d", &b[i][j]);
        }
//sum a+b
    printf("Sum of two matrices a & b is \n");
    for(i=0; i<n; i++){
            for(j=0; j<n; j++)
                sum[i][j]= a[i][j] + b[i][j];
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }
}