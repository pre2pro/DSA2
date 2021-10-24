#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int info;
	struct node *link;
};

typedef struct node NODE;
NODE *head = NULL;

void createsinglinklist()
{
	int ch;
	NODE *currptr, *newnode;
	currptr = (NODE*) malloc (sizeof(NODE));
	head = currptr;

	while(currptr!=NULL)
	{
		cout<<"\nEnter the info of the NODE: ";
		cin>> currptr->info;
		cout<<"\n Do you wish to add more NODES?(0/1)";
		cin>>ch;
		if(ch==1)
		{
			newnode = (NODE*) malloc (sizeof(NODE));
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



void displaylinklist(NODE *p)
{
	if(p!=NULL)
	{
		cout<< p->info<<"->";
		displaylinklist(p->link);
	}
	if(p==NULL)
		cout<<"NULL";

}
void insertBeg()
{
	NODE *currptr;
	currptr = new NODE;
	cout<<"Enter the info of new node: ";
	cin>> currptr->info;
	currptr->link = head;
	head = currptr;
}
int main()
{
	int choice;
	while(1)
	{
	
	cout<<"\n1. Create Linked list: ";
	cout<<"\n2. Display Linked List: ";
	cout<<"\n3. Insert a Node at beginning of Linked List: ";
	cout<<"\n4. Exit!";
	cout<<"\n\nEnter Your Choice: ";
	cin>> choice;
	switch(choice)
		{
		case 1: createsinglinklist(); break;
		case 2: displaylinklist(head); break;
		case 3: insertBeg(); break;
		case 4: exit(0);
		default: cout<<"Wrong choice!!!"; break;
		}

	//22
	}
}