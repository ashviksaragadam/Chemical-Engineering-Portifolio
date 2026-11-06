#include<stdio.h>
int main()
{
	int n,i=1;
	int a=0,b=1,c;
	printf("Enter number of terms:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Enter a positive number of terms:");
	}
	else
{
	printf("Fibnocci Series: \n");
	
	while(i<=n)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
}
return 0;
}

