#include<stdio.h>
int main()
{
	int x;
	printf("Enter an integer:");
	scanf("%d",&x);
	printf("\nIncrement Operators:\n");
	printf("\t%d\t%d\t\n",x,x++,++x);
	printf("\t%d\t%d\t%d\n",x++,++x);
	printf("\nDecrement Operators:\n");
	printf("\t%d\t%d\t%d\n",x--,--x,++x);
	printf("\t%d\t%d\t%d\n",--x,x,x--);
	return 0;
}
