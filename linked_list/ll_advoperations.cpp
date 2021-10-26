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
	cout<<"Enter the info of new NODE: ";
	cin>> currptr->info;
	currptr->link = head;
	head = currptr;
}

void insertEnd(NODE *p)
{
	NODE *newnode;
	while(p->link != NULL)
	{
		p = p->link;
	}
	newnode = new NODE;
	cout<<"Enter the info of the new NODE: ";
	cin>>newnode->info;
	p->link = newnode;
	newnode->link = NULL;
		
}

void insertPos(NODE *p, int pos)
{
	NODE *currptr = head, *newnode;
	if(pos==1)
	{
		insertBeg();
	}
	else
	{
		for(int i=0; i<pos-2; i++)
			currptr = currptr->link;
		newnode = new NODE;
		cout<<"\nEnter the item of the NODE: ";
		cin>>newnode->info;
		newnode->link = currptr->link;
		currptr->link = newnode;
	}
}

void deleteBeg()
{
	NODE *currptr;
	if(head==NULL)
		cout<<"Linked List is Empty!!!!";
	else
	{
		currptr = head;
		head = head->link;
		free(currptr);
	}
}

void deleteEnd()
{
	NODE *currptr = head, *p;
		while(currptr->link!=NULL)
		{
			currptr = currptr->link;
		}
		p = currptr;
		p->link = NULL;
}

int main()
{
	int choice, pos, posDel;
	while(1)
	{
	
	cout<<"\n1. Create Linked list: ";
	cout<<"\n2. Display Linked List: ";
	cout<<"\n3. Insert a Node at beginning of Linked List: ";
	cout<<"\n4. Insert a Node at End of the Linked List: ";
	cout<<"\n5. Insert a Node at desired position in the List: ";
	cout<<"\n6. Delete a Node at beginning of the List?";
	cout<<"\n7. Delete a Node at the End of the List?";
	cout<<"\n8. Delete a Node at the desired position in the List: ";
	cout<<"\n9. Search for a Node in the list: ";
	cout<<"\n10. Exit!";
	cout<<"\n\nEnter Your Choice: ";
	cin>> choice;
	switch(choice)
		{
		case 1: createsinglinklist(); break;
		case 2: displaylinklist(head); break;
		case 3: insertBeg(); break;
		case 4: insertEnd(head); break;
		case 5: cout<<"\nEnter the position of the node: ";
				cin>>pos;
				insertPos(head, pos); break;
		case 6: deleteBeg(); break;
		case 7: deleteEnd(); break;
		// case 8: cout<<"Enter the position at which the Node has to be deleted: ";
				// cin>>posDel;
				// deletePos(posDel); break;
		case 9: cout<<"Enter the info that has to be searched: ";
		case 10: exit(0);
		default: cout<<"Wrong choice!!!"; break;
		}

	//2
	}
}