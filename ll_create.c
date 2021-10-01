#include <stdio.h>
#include<stdlib.h>

void create();
void display();

struct node
{
    int INFO;
    struct node *LINK;
};

typedef struct node NODE;
NODE *start = NULL;

void main()
{
    printf("\nCreation Of Linked List: \n");
    create();
    printf("\nLinked List: \n");
    display();
}

void create(){
    int j;
    int i=0;
    NODE *CURRPTR, *NEWNODE;

    CURRPTR =(NODE *) malloc (sizeof(NODE));

    start = CURRPTR;

    while(1){
        printf("Enter the Node %d : ", i+1);
        scanf("%d", &CURRPTR->INFO);
        printf("Do you wish to add one more node?(0/1): ");
        scanf("%d", &j);

        if(j==1){
            NEWNODE = (NODE*) malloc (sizeof(NODE));
            CURRPTR->LINK = NEWNODE;
            CURRPTR = NEWNODE;
        }
        else{
            CURRPTR->LINK=NULL;
            break;
        }
        i++;
    }

}

void display(){

    NODE *CURRPTR = start;

    if(start==NULL)
        printf("The Linked List is Empty!!!");
    
    else{
        while(CURRPTR!=NULL)
        {
            printf("%d", CURRPTR->INFO);
            printf("->");
            CURRPTR = CURRPTR->LINK ;
        }
        printf("NULL");
    }

}