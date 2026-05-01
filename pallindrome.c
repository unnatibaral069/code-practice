#include<stdio.h>
int main()
{
	int n,i,rev=0,x;
	printf("\nenter a no to check:");
	scanf("%d",&n); x=i;
	while(i>0)
	{
		rev = (rev*10)+i%10;
		i=i/10;
	}
	if(rev==x)
	printf("the no is pallindrome:");
	else {
		printf("no is not pallindrome:");
	}
return 0;
}
