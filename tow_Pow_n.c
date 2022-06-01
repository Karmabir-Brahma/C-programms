#include <stdio.h>

int two_Pow_n(int n);

int main()
{
	int n;
	printf("Enter the nth term:- ");
	scanf("%d",&n);
	
	if(n<0)
		printf("The term cannot be in negative\n");
	
	else
	{
		int result = two_Pow_n(n);
		printf("2^%d = %d\n",n,result);
	}
	return 0;
}

int two_Pow_n(int n)
{
	if(n==1)
		return 2;
	if(n==0)
		return 1;
	else
		return 2*two_Pow_n(n-1);
}