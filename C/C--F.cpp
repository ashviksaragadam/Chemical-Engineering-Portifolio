`#include<stdio.h>
int main()
{
float fahrenheit, celsius;
printf("Enter temperature in Celsius:");
scanf("%f",&celsius);
celsius=(fahrenheit-32)*5/9;
printf("Temperature in Celsius=%.2f",celsius);
return 0;
}
