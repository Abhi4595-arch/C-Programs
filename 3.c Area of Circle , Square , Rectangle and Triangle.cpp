#include<stdio.h>
#define PI 3.14
int main()
{
	float R,A,Len,Wid,AREA,Side,area,base,height,TRI;
	printf("Enter Radius : ");
	scanf("%f",&R);
	A=PI*R*R;
	printf("Area of the Circle : %f",A);
	printf("\nEnter Length and Width : ");
	scanf("%f%f",&Len,&Wid);
	AREA=Len*Wid;
	printf("Area of Rectangle : %f",AREA);
	printf("\nEnter Side : ");
	scanf("%f",&Side);
	area=Side*Side;
	printf("Area of the Square : %f",area);
	printf("\nEnter Base and Height :");
	scanf("%f%f",&base,&height);
	TRI=0.5*base*height;
	printf("Area of Triangle : %f",TRI);
	return 0;
}