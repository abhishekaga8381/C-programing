E:\collage\linkcode\18-05-2026\emloyee_salary.c#include <stdio.h>

int main() {

	char name[20];
	int id, base_salary;
	float hra,ma,ta,pf,gross_salary, net_salary;

	printf("Enter name of employee");
	scanf("%s", name);

	printf("Enter employee id");
	scanf("%d", &id);

	printf("Enter employee base salary");
	scanf("%d", &base_salary);

	hra = 0.2*base_salary;
	ma = 0.05*base_salary;
	ta = 0.1*base_salary;
	pf = 0.12*base_salary;
	gross_salary = base_salary+hra+ma+ta;
	net_salary = gross_salary-pf;

	printf("\nname of employee %s", name);
	printf("\nemployee id %d", id);
	printf("\nemployee base salary %d", base_salary);
	printf("\nhra %f",hra);
	printf("\nma %f",ma);
	printf("\nta %f",ta);
	printf("\npf %f",pf);
	printf("\ngross_salary %f",gross_salary);
	printf("\nnet_salary %f",net_salary);




}


