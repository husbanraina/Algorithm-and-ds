//display even numbers in a linked list

#include<stdio.h>
#include<stdlib.h>

void create();                    
void even();
struct nod  
{  
    int data;  
    struct nod *next;   
};

struct nod*head=NULL,*tail=NULL;

int main()
{
	int c;
	while(1)
	{
		
		printf("\n 1 to  create \n 2 to display even numbers \n ");
		printf(" enter your choice \n");
		scanf("%i",&c);
		switch(c)
		{
			case 1:create();
			break;
		
			case 2:even();
			break;
			
			default :printf("try again!");
			return 0;
		}
	}
}

void create()
{
	int n,i;
	printf("enter the number of nodes you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct nod* temp=(struct nod *)malloc(sizeof(struct nod));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 
 
 void even()
 {
 	struct nod *ptr;
 	printf("the even numbers are as :\n");
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(ptr->data%2==0)
 		printf("%d",ptr->data);
 		ptr=ptr->next;
	 }
 }
