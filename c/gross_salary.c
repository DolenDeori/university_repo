
#include<stdio.h>
#include<conio.h>
//aitu e niki yu   yaat ami name tu input koribo code add korile aru chaliya hobo,mane ei person tur name - then his gross salary ,,,,aasa ne vailog??,,,, mur net ses ha aami kali aako yaate code prac korim 
//imane naa

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
