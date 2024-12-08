#include<stdio.h>
int maxmang(int n,int a[]){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int main(){
	int n;
	printf("nhap vao so luong phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("phan tu lon nhat trong mang vua nhap la: %d",maxmang(n,a));
	return 0;
}
