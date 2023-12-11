#include<stdio.h>

 main(){
 	int a[100],b[100],c[200],i,n,n1,temp =0,ans;
 	printf("size of arry A =");
 	scanf("%d",&n);
 	
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 		c[i] =a[i];
	 }
	 temp =i;
	 printf("size of arry B=");
	 scanf("%d",&n1);
	 
	 for(i=0;i<n1;i++)
	 {
	 	scanf("%d",&b[i]);
	 	c[temp] = b[i];
	 	temp++;
	 }
	 
	 printf("\n merg arry=");
	 
	 for(i=0;i<n+n1;i++)
	 {
	 	printf("%d  ",c[i]);
	 }
}
