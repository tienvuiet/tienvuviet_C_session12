#include<stdio.h>
void matrannhap( int n, int m,int c[100][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("c[%d][%d]=",i,j);
			scanf("%d",&c[i][j]);
		}
	}	
}
void matranxuat(int n, int m,int c[100][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("  %d ",c[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a, b;
	int c[100][100];
	printf("nhap vao so hang :");
	scanf("%d",&a);
	printf("nhap vao so cot :");
	scanf("%d",&b);
	if(a!=b){
		printf("nhap lai so hang bang so cot");
		return 1;
	}
	matrannhap(a,b,c);
	printf("ma tra la: \n");
	matranxuat(a,b,c);
	return 0;	
}
