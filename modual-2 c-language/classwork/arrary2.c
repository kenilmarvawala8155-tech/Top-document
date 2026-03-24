#include<stdio.h>
main(){
	//datatype arraryname[size]
	int a[5],sum=0;
	int i;
	for(i=0;i<5;i++){
	printf("\n enter a[%d]",i);
	scanf("%d",&a[i]);
	sum=sum+a[i];
	
}
for(i=0;i<5;i++)
{
	printf("\n a[%d]=%d",i,a[i]);
	
}
printf("\n sum of all number=%d",sum);
}
