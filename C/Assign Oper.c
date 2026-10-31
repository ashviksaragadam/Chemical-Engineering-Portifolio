#include<stdio.h>
int main()
{
	
int a,b,result;
printf("Enter two integers (a and b):");
scanf("%d%d",&a,&b);
if(b==0)
{
	printf("Error:b must not be zero.\n");
}
result=(a>=5&&a<15)?++a:a/b;
printf("Result=%d\n",result);
printf("Value of a=%d\n",a);
return 0;
}
