#include<stdio.h>
#include<math.h>

void main(){
    int a[10][10],n,i,j, trace = 0;
    float  sum = 0, norm1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the %d elements ", n*n);
    for(i=0; i<n; i++);
        for(j=0; j<n; j++);
            scanf("%d", &a[i][j]);
    
    for(i=0; i<n; i++){
        trace = trace + a[i][j];
        for(j=0; j<n; j++){
            sum = sum + a[i][j] *a[i][j];
        }
    }
    
    norm1 = sqrt(sum);

    printf("trace = %d", trace);
    printf("norm = %4.2f", norm1);

}