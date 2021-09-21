#include<stdio.h>

void main(){
    int fibo[50], i,n;

    printf("How many fibonacci terms(n<50)?");
    scanf("%d", &n);

    fibo[0]=0;
    fibo[1]=1;
    for(i=2; i<n; i++)
        fibo[i] = fibo[i-2] + fibo[i-1];
    
    
    printf("Fibonacci Series: ");
    for(i=0; i<n; i++)
        printf("%d \t", fibo[i]);
}