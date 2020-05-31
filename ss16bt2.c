#include <stdio.h>
#include <stdlib.h>


	
cv (float x)
{
	float cv;
	cv=2*x*3.14;
	printf("\n chu vi hinh tron la: %f ",cv);
}

dt (float x)
{
	float dt;
	dt=x*x*3.14;
	printf("\n dien tich hinh tron: %f",dt);
}

	
int main() {
	float r; 
	float chuvi,dientich;
	char a[10];
	printf("nhap don vi do: ");
	gets(a);
	printf("\n nhap ban kinh duong trong: ");
	scanf("%f",&r);
	chuvi=cv(r);
	dientich=dt(r);

}


