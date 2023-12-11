#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("enter the value of size : ");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++){
		printf("enter the value of A %d : ", i);
		scanf("%d",&a[i]);	
	}
	
	int b[n];
	printf("enter the value of size : ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("enter the value of B %d : ", i);
		scanf("%d",&b[i]);	
	}
	
	int sum[n];
	for(i=0; i<n; i++){
		sum[i]=a[i]+b[i];
		printf("\n %d",sum[i]);
	}

}
