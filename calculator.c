#include<stdio.h>
int main()
{
	char ch;
    float fn,sn,result;
    printf("\nselect option from 1-4");
    printf("\n1.Addition:");
    printf("\n2. Subtraction:");
    printf("\n3.Multiplication");
    printf("\n4.division");
    printf("\nenter your choice:");
    scanf("%c",&ch);
    switch(ch)
    {
    	case 1:
    	printf("\nenter two numbers:");
    	scanf("%f%f",&fn,&sn);
    	result= fn+sn;
    	printf("addition=%.2f",result);
    	break;
    	
    	case 2:
    	printf("\nenter two numbers:");
    	scanf("%f%f",&fn,&sn);
    	result = fn-sn;
    	printf("subtraction = %.2f",result);
    	break;
    	
    	case 3:
    	printf("\nenter two numbers:");
    	scanf("%f%f",&fn,&sn);
    	result =fn*sn;
    	printf("multiplication = %.2f",result);
    	break;
    	
    	case 4:
    	printf("\nenter two numbers:");
    	scanf("%f%f",&fn,&sn);
    	result =fn*sn;
    	printf("division = %.2f",result);
		break;
		
		default:
		printf("\nInvalid option selected:");
			}
			return 0;
}
