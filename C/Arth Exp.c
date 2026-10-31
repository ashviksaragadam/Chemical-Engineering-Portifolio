#include<stdio.h>
int main()
{
	int a,b,c,result;
	printf("Enter three integers(a,b,c):");
	scanf("%d%d%d",&a,&b,&c);
	if(b==0)
	{
		printf("Error: Division by zero is not allowed:\n");
	}
	result=(a+b)*c-a/b+a%b;
	printf("\nExpression:(a+b)*c-a/b+a%%b\n");
	printf("Result=%d\n",result);
	return 0;

}



