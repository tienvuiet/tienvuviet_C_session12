#include<stdio.h>
#include<math.h>
void nguyento(int n){
	int dem=1;
	if(n<2){
		dem=0;
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				dem=0;
				break; 
			}
		}
	}
	if(dem==1){
		printf("true\n");
	}else {
		printf("false\n");
	}
}
int main(){
	int a,b;
	printf("nhap vao so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("ket qua la: ");
	nguyento(a);
	printf("nhap vao so nguyen thu hai: ");
	scanf("%d",&b);
	printf("ket qua la: ");	
	nguyento(b);
	return 0;
}
