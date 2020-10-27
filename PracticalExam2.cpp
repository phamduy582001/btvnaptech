#include <stdio.h>
#include "PraticalFunction.h"
int main (){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	float t=0;
	float tbc=0;
	NhapMang(arr,n);
	TBC(arr,n,t,tbc);
}
