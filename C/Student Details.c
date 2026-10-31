#include<stdio.h>
int main()
{
int roll_no,age,phone;
float cgpa;
char name[50],branch[20];
printf("***Student Details***\n");
printf("Enter your name: \n");
scanf("%s",name);
printf("Enter your age:\n");
scanf("%d",&age);
printf("Enter your roll no: \n");
scanf("%d",&roll_no);
printf("Enter your branch:\n");
scanf("%s",branch);
printf("Enter your cgpa:\n");
scanf("%f",&cgpa);
printf("Enter your phone: \n");
scanf("%d",&phone);
printf("name:%s \n",name);
printf("age:%d \n",age);
printf("roll no:%d \n",roll_no);
printf("branch:%s \n",branch);
printf("cgpa:%f \n",cgpa);
printf("phone:%d \n",phone);
return 0;
}
