#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter size :");
	scanf("%d",&n);
	
	int arr[n],sum=0,i;
	
	for(i=0; i<n; i++){
		printf("enter value %d :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++){
		sum +=arr[i];
	}
	
	int length=sizeof(arr) / sizeof(arr[0]);
	
	printf("average : %d",sum/length);
	
}
