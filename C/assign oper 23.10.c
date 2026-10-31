#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter inital value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("nInitial a=%d\n",a);
	a+=b;
	printf("After a+=b,%d\n",a);
	a-=b;
	printf("After a-=b,%d\n",a);
	a*=b;
	printf("After a*=b,%d\n",a);
	if(b!=0)
	{
		a/=b;
		printf("After a/=b,%d\n",a);
		a%=b;
		printf("After a%=b,%d\n",a);
	}
	else
	{
	printf("Division and modulus by zero are not allowed:\n");
	}
	return 0;
}
