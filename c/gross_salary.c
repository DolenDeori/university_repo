#include<stdio.h>
// #include<conio.h>

int main()
{
	float basic,hra,da,gross_salary;
	printf("\n Please enter the basic salary of an employee:");
	scanf("%f",&basic);
	if(basic<1500)
	{
		hra=(basic*10)/100;
		da=(basic*90)/100;
	}
	else 
	{
		hra=500;
		da=(basic*98)/100;
	}
	
	gross_salary=basic+hra+da;
	
	printf("\n gross_salary= %.2f",gross_salary);
}
