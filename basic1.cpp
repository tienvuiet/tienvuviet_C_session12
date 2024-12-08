#include<stdio.h>
int tong(int a,int b){
	int tong=a+b;
	return tong;
}
int main (){
	int n,m;
	printf("nhap vao 2 so can tinh tong:\n");
	scanf("%d %d",&n,&m);
	int sum=tong(n,m);
	printf("tong hai so la: %d",sum);
	return 0;
}
