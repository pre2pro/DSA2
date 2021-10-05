#include<stdio.h>

int fibo(int n);
void main(){

    int n, i=0;

    printf("Enter the number to generate fibonacci: ");
    scanf("%d", &n);

    while (i<n)
    {
        ++i;
        printf("%d", fibo(i));
    }

    printf("%dth element of the series is: %d", n, fibo(i));
    
}

int fibo(int n)
{
    if((n==0)||(n==1))
        return(0);
    if(n==2)
        return(1);
    else
        return (fibo(n-1)+fibo(n-2));                                                                                                                        
}
