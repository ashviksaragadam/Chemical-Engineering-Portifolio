#include<stdio.h>
int main()
{
int choice;
float a,b;
printf("MENU-DRIVEN CALCULATOR\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
                                                                          printf("4. Division\n");
printf("Enter your choice:");
scanf("%d",&choice);
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
switch(choice);
{
     case 1:
		printf("Sum=%.2f",a+b);
		case 2:
			printf("Difference=%2f",a-b);
			case 3:
				printf("Product=%2f,a*b");
				case 4:
					if(b!=0)
{
	printf("Quotient=%.2f",a/b);
}
else
{
	printf("Division by zero is not allowed");
}
default:
	printf("Invalid choice");
}
return 0;
}
