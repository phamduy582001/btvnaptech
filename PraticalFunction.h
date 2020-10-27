#include <stdio.h>
void NhapMang(int arr[],int n)
{
	printf("Nhap gia tri cho mang : \n");
	for(int i=0;i<n;i++){
	 	printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
float TBC(int arr[] ,int n ,float t=0, float tbc=0){
	for(int i=0;i<n;i++){
		t+=arr[i];
	}
	 tbc=t/n;
	 printf("%f",tbc);
}


