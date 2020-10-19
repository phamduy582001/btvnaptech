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
	int sole=0;
	int dem=0;
	for(int i=0;i<=n;i++){
		if(arr[i]%2!=0){
			sole=arr[i];
		  dem++;
		}
	}	printf("So le cuoi cung trong mang la %d\n",sole);
}
