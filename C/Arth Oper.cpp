#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values: \n");
scanf("%d%d%d",&a,&b,&c);
printf("Addition: \n",c=a+b);
printf("Subtraction: \n",a=b-c);
printf("Multiplication: \n",c=a*b);
printf("Division: \n",b=c/a);
printf("Remainder: \n",c=a%b);
return 0;
}
