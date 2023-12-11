#include<stdio.h>

int main(){
	
	int n;
	int mark[n],i;
	
	printf("enter the size :");
	scanf("%d",&n);
	
	for(i=0;i<n; i++){
		printf("enter the value %d :",i);
		scanf("%d",&mark[i]);
	}
	for(i=0;i<n; i++){
		printf("%d %d \n",i,mark[i]);
	}
	return 0;
}
