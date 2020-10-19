#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap so nguyen n = ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(int i=0;i<=n;i++)
	{
		if(arr[i]>0){
			min=arr[i];
			break;
		}
		
	}
	for (int i=0;i<=n;i++){
		if(arr[i]>0&&min>arr[i]){
			min=arr[i];
		
		}
	}

	printf("so duong nho nhat trong day la %d",min);
}
