#include <stdio.h>
#include <math.h>
int main ()
{
	float a,b,c;
	do{
		printf("Nhap a = ");
	scanf("%f",&a);
	printf("Nhap b = ");
	scanf("%f",&b);
	printf("Nhap c = ");
	scanf("%f",&c);
	}while((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(c*c+b*b>a*a));
	printf("Day la 3 canh cua tam giac");
	float p;
	float x;
	p=a+b+c;
	printf("\nChu vi tam giac la = %f",p);
	float s=0;
		x=p/2;
	s=sqrt(x*(x-a)*(x-b)*(x-c));
	printf("\nDien tich tam giac la = %f",s);
}

