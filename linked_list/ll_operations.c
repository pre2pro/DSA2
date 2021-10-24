#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int info;
    struct node *link;
};

typedef struct node NODE;
NODE *head = NULL;
int sum = 0, count =0, sum1 = 0;

void createsinglinlist()
{
    _Bool ch;
    NODE *currptr, *newnode;
    currptr = (NODE *)malloc(sizeof(NODE));
    head = currptr;

    while (currptr != NULL)
    {
        printf("\nEnter the Info of the NODE: ");
        scanf("%d", &currptr->info);
        printf("\n Do you wish to add more nodes(1/0): ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            newnode = (NODE *)malloc(sizeof(NODE));
            currptr->link = newnode;
            currptr = newnode;
        }
        else
        {
            currptr->link = NULL;
            break;
        }
    }
}

void displaysinglinlist()
{
    NODE *currptr;

    currptr = head;

    if (head->info == 0)
        printf("linked list is empty!!!");

    else
    {

        while (currptr != NULL)
        {
            printf("%d", currptr->info);
            printf("->");
            currptr = currptr->link;
        }
        printf("NULL");
    }
}

void rdisplaysll(NODE *p)
{
    if (p != NULL)
    {
        printf("%d->", p->info);
        rdisplaysll(p->link);
    }
    if (p == NULL)
        printf("NULL");
}

void rdisplaysllstk(NODE *p)
{

    if (p != NULL)
    {
        rdisplaysllstk(p->link);
        printf("->%d", p->info);
        count++;
    }
    else
        exit;
}

int addsll(NODE *p)
{

    while (p != NULL)
    {
        sum1 = sum1 + p->info;
        p = p->link;
    }
    return sum1;
}

int Raddsll(NODE *p)
{
    if (p != NULL)
    {
        Raddsll(p->link);
        sum = sum + p->info;
    }
    else
        return sum;
}

int main()
{   int choice;

    while(1){


    printf("\n1.Create Linked list: \n");
    printf("\n2. Linked list:");
    printf("\n3. Recursive display: ");
    printf("\n4. Recursive Stack Display: ");
    printf("\n5. Find number of elemnts in the linked list?");
    printf("\n6. Find Sum of the elements of the Node");
    printf("\n7. Find Recursive Sum of elements of the Nodes");
    printf("\n8. Exit!");

    printf("\n Enter your choice: " );
    scanf("%d", &choice);

    switch (choice){
    case 1: createsinglinlist();
            break;
    case 2:  displaysinglinlist();
            break;
    case 3:     rdisplaysll(head);
            break;
    case 4:     printf("NULL");
            rdisplaysllstk(head);
            break;
    case 5:     printf("\n5. Number of Elements in the linked list: %d", count);
            break;
    case 6:     printf("\n6. Sum of the elements of the Node: %d", addsll(head));
            break;
    case 7:     printf("\n7. Recursive Sum of elements of the Nodes: %d", Raddsll(head));
            break;
    case 8: exit(0);
    default: printf("\nWrong choice try again!!!");
            break;
    }


}
}