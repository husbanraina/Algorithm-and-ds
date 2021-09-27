//display prime numbers in a linked list

#include<stdio.h>
#include<stdlib.h>

void create();

void prime();

int isprime(int);

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
	
		printf("\n 1 to  create  \n 2 to display prime numbers \n ");
		printf(" enter your choice ");
		scanf("%i",&c);
		switch(c)
		{
			case 1:create();
			break;
		
			case 2:prime();
			break;
			default :printf(" try again!");
			return 0;
		}
	}
}

void create()
{
	int n,i;
	printf(" enter the number of nodes  ");
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

 void view()
 {
 	struct nod*ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d",ptr->data);
 		ptr=ptr->next;
	}

 }

 int isprime(int n)
 {
   int  i, c = 0;
 
 for (i = 1; i <= n; i++) 
 {
      if (n % i == 0) 
	 {
         c++;
      }
  }

  if (c == 2)
   return 1 ;
  else
  
  return 0;  
}
 
  
 void prime()
 {
 	struct nod *ptr;
 	ptr=head;
 	printf("\nprime numbers among the list are :\n");  
    while(ptr!=NULL)
{
	int p=isprime(ptr->data);
	if(p==1)
	printf("%d \t",ptr->data);
	ptr=ptr->next;
}
}
