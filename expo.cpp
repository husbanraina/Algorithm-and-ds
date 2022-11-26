#include<stdio.h>
int pow( float x , float n)
{
	if (n==1)
	{
		return x ;
	}
	else
	{
		return pow(x, n-1)* x ;
	}
}
float fact(float n)
{
	if(n==0)
	{
		return 1 ;
	}
	else
	{
		return fact(n-1)*n ;
	}
}
float expo ( float x , float n)
{
	if(n==0)
	{
		return 1 ;
	}
	else
	{
		return expo(x, n-1)+pow(x ,n )/fact(n) ;
	}
}


int main()

{
	
	float r = expo(1,50) ;
	printf("%f", r) ;
	return 0 ;
}
