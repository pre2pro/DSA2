#include<stdio.h>
#include<stdlib.h>
#define MAXSTK 5
void push();
void pop();
void display();
    int top = -1, S[MAXSTK], ch;

void main(){


    while(1){
        printf("------STACK IMPLEMENTATION------");
        printf("1. PUSH");
        printf("2. POP");
        printf("3. DISPLAY");
        printf("4. EXIT");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: push(); 
            break;
        case 2: pop();
            break;
        case 3: display();
            break;
        case 4: exit(1);
        
        default: printf("Wrong choice!!!");
            break;
        }
    }
}

void push(){
    int item;

    if(top==MAXSTK)
        printf("Stack Overflow!!!");

    else{
        printf("Enter the Item to be pushed: ");
        scanf("%d", &item);
        top=top+1;
        S[top]=item;
    }
}

void pop(){
    if(top==-1)
        printf("Stak underflow!!!");
    
    else{
        top = top-1;
    }
}

void display(){
    
    int i;

    if(top==-1)
        printf("Stack UNderflow!!!");
    
    else{
        for(i=0; i<top; i++)
            printf("%d", S[i]);
    }


}