#include<stdio.h>

void main(){
    int a[10][10], b[10][10],prod[10][10], i, j, n ;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter %d elements of matrix a: ", n*n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter %d elements of matrix b: ", n*n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &b[i][j]);
    
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            prod[i][j]=0;
            for(int k=0; k<n; k++)
            prod[i][j] = prod[i][j] + a[i][k] * b[k][j];
        }

     for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%4d \t", prod[i][j]);
     printf("\n");

     }
}