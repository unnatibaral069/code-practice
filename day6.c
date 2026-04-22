#include<stdio.h>
int factorial(int)
int main()
{
int num,fact;
printf("enter a no to check:");
scanf("%d",&fact);
fact=factorial(num);
printf("the factorial of %d is %d",num,fact);
return 0;
}
int factorial(int n)
{
int i,fac=1;
for(i=1;i<=n;i++)
fac=fac*i;
return fac;
}
