#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t;
	float si,ci,A;
	printf("Enter principal amount:");
	scanf("%f",&p);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("Enter time in years:");
	scanf("%f",&t);
	si=((p*r*t)/100);
	A=(p*pow((1+r/100),t));
	ci=A-p;
	printf("Simple interest=%.2f\n",si);
	printf("Compound interest=%.2f\n",ci);
	printf("Amount=%.2f\n",A);
	return 0;
}
	
	

