#include<stdio.h>
int main()
{
	int UNITS;
	float AMT,CHARGE,TOTALBILL;
	printf("Enter the units Consumed : ");
	scanf("%d",&UNITS);
	if(UNITS<=50)
	{
		AMT=UNITS*2.50;
		CHARGE=30;
	}
	else if(UNITS>50 && UNITS<=100)
	{
		AMT=UNITS*3.00;
		CHARGE=50;
	}
	else if(UNITS>100 && UNITS<=200)
	{
		AMT=UNITS*3.50;
		CHARGE=75;
	}
	else if(UNITS>200 && UNITS<=300)
	{
		AMT=UNITS*4.00;
		CHARGE=100;
	}
	else
	{
		AMT=UNITS*5.00;
		CHARGE=125;
	}
	TOTALBILL=AMT+CHARGE;
	printf("Total Electricity Bill : %.2f",TOTALBILL);
	return 0;
}