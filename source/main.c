#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	float s,t;		//s�O�P����B�At�O�~���`�M

	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &s);

	while (s!=-1)
	{
		t = 200 + s * 9 / 100;
		printf("Salary is :$%.2f\n\n", t);
		

		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &s);
		
	}

	system("pause");
	return 0;
}