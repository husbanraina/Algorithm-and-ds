// frequency of a number in a linked list   
#include<stdio.h>
#include<stdlib.h>

void create();
void frequency();

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
	
		printf(" 1 to  create  \n 2 To check the frequency of a given number\n");
		printf("  enter your choice \n ");
		
		scanf("%i",&c);
		switch(c)
		{
			case 1:create();
			break;
			case 2:frequency();
			break;
			default :printf("try again \n!");
			return 0;
		}
	}


}

void create()
{
	int n,i;
	printf(" enter the number of nodes \n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		struct nod* temp=(struct nod *)malloc(sizeof(struct nod));
		printf("enter your data:");
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
 
  
  
  void frequency()
  {
  	int element,count=0;
  	struct nod *ptr=head;
  	printf("enter the number whose frequency you want to know:\n");
  	scanf("%d",&element);
  	while(ptr!=NULL)
    {
      	if(ptr->data==element)
      	{
      		count++;
	    }
	    ptr=ptr->next;
	 }
     printf("the frequency of this given number is: %d \n",count);
		  printf("\n");
  }
