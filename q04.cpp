// maximum and minimum number in a linked list

#include<stdio.h>
#include<stdlib.h>

void create();
void max();
void min();

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
	
		printf("\n 1 to  create   \n 2 to show the maximum element of the linked list \n 3 to show the minimum element of a linked list \n");
		printf(" enter your choice ");
		
		scanf("%i",&c);
		switch(c)
		{
			case 1:create();
			break;
	        case 2:max();
			break;
			case 3:min();
			break;
			default :printf(" try again!");
			return 0;
		}
	}


}

void create()
{
	int n,i;
	printf(" enter the number of nodes ");
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

 
  void max()
 {
 	int max=head->data;
 	struct nod *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(max<ptr->data)
 		{
 			max=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf("\n maximum element of the linked list=%d",max);
 }
 
 void min()
 {
 	int min=head->data;
 	struct nod *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(min>ptr->data)
 		{
 			min=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf("\n minimum element of the linked list=%d",min);
 }
