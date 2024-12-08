#include<stdio.h>
void xuat_mang(int n, int a[]){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	printf("nhap vao so luong phan tu mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("cac phan tu mang vua nhap la: ");
	xuat_mang(n,a);
	return 0;
	
}
