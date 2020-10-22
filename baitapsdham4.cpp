#include <stdio.h>
#include "hammorong.h"

int main (){
	int a,b,c;
	printf("Nhap a,b,c = ");
	scanf("%d%d%d",&a,&b,&c);
	double s=DienTichTamGiac(a,b,c);
	printf("%f",s);
}
