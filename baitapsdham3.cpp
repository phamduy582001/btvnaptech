#include <stdio.h>
#include "hammorong.h"

int main (){
	int a,b,c;
	printf("Nhap a,b,c = ");
	scanf("%d%d%d",&a,&b,&c);
	int p=ChuViTamGiac(a,b,c);
	printf("%d",p);
}

