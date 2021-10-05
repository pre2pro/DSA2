#include<stdio.h>
int factorial(int k);
void main(){

    int n, value;

    printf("Enter the Number: ");
    scanf("%d", &n);

    if(n<0)
        printf("No factorial of negative number!!!");
    if(n==0)
        printf("Factorial of 0 is 1");
    else{
        value = factorial(n);
        printf("The Factorial of %d is %d", n, value);
    }

}

int factorial(int k){
    if(k==1)
        return 1;
    else
        return (k*factorial(k-1));

}