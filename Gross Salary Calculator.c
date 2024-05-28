#include<stdio.h>

main()
{
	int Base_salary;
	float HRA, DA, TA, Gross_salary, A, B, C;
	
	printf("Enter your Base_salary=");
	scanf("%d", &Base_salary);
	
	printf("Enter your HRA=");
	scanf("%f", &HRA);
	
	printf("Enter your DA=");
	scanf("%f", &DA);
	
	printf("Enter your TA=");
	scanf("%f", &TA);
	
	HRA=Base_salary*HRA/100, DA=Base_salary*DA/100, TA=Base_salary*TA/100;
	
	Gross_salary= Base_salary+HRA+DA+TA;
	
	printf("Result of Gross_salary=%.2f",Gross_salary);
}
