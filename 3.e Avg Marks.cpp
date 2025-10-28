#include<stdio.h>
int main()
{
	int ENGLISH,MATHS,SCIENCE,HISTORY,BIOLOGY,TOTAL;
	float avg;
	printf("Enter Marks of ENGLISH,MATHS,SCIENCE,HISTORY,BIOLOGY : ");
	scanf("%d%d%d%d%d",&ENGLISH,&MATHS,&SCIENCE,&HISTORY,&BIOLOGY);
	TOTAL=ENGLISH+MATHS+SCIENCE+HISTORY+BIOLOGY;
	avg=TOTAL/5.0;
	printf("Avg Marks of all subjects : %f",avg);
	return 0;
}