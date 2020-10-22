#include <stdio.h>
#include <math.h>
int TinhTongCacChuSo(int n){
	int s=0;
	while(n!=0){
	
		int a =n%10;
		s=s+a;
		n=n/10;
	}
	return s ;
}
int ChuViTamGiac(int a, int b, int c){
	int p=a+b+c;
	return p;
}
double DienTichTamGiac(int a, int b, int c){
	double p=(a+b+c)/2;
	double s=0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int UCLN (int a , int b){
	int uoc=0;
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			printf("UCLN : %d",i);
			break;
		}
	}return uoc;
}
int BCNN (int a , int b ){
	int boi=0;
	for(int i=a;true;i++){
		if(i%a==0&&i%b==0){
			printf("BCNN : %d ",i);
			break;
		}
	}return boi;
}
