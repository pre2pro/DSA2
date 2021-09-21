#include<stdio.h>

void main(){
    int a[10], largest, smallest, n, i;
    float sum, avg;


    //Getting input
    printf("Enter the size of the array (n<10)");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    //init
    largest=a[0];
    smallest=a[0];
    sum=0;

    //finding sum, small, large
    for(i=0; i<n; i++){
        sum=sum+a[i];                         //sum
         
        if(smallest<a[i])
            smallest=a[i];                    //smallest
        
        if(largest>a[i])
            largest=a[i];                     //largest
    }
    avg=sum/n;
    printf("sum = %7.2f\n", sum);
    printf("avg = %7.2f\n", avg);
    printf("smallest = %d\n", smallest);
    printf("largest = %d\n",largest);

}