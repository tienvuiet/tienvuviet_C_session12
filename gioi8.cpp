#include<stdio.h>
int min(int a, int b){
	int min;
	if(a>b){
		return b;
	}else{
		return a;
	}
}
int ucln(int a, int b){
	if(a==0||b==0){
		return a+b;
	}
	else{
		for(int i=min(a,b);i>=1;i--){
			if(a%i==0&&b%i==0){
				return i;
			}
		}
		
	}
}
int ucln3so(int a,int b, int k){
	return ucln(ucln(a,b),k);
} 
int main(){
	int c,d,f;
	printf("nhap vao so thu nhat: \n");
	scanf("%d",&c);
	printf("nhap vao so thu hai: \n");
	scanf("%d",&d);	
	printf("nhap vao so thu ba: \n");
	scanf("%d",&f);		
	printf("uoc chung lon nhat cua ba so vua nhap la: %d",ucln3so(c,d,f));
	return 0;
}

