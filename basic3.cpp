#include<stdio.h>
double tinhtoan(double n){
	double giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua;
} 
int main(){
	int n;
	printf("nhap so nguyen muon tinh giai thua: ");
	scanf("%d",&n);
	
	printf("ket qua cua bai toan la: %.0lf",tinhtoan(n));
	return 0;
}
