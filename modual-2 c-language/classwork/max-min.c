#include<stdio.h>
main(){
	int arr[5],i;
	int min,max;
	printf("enter the 5 number =");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(i=0;i<5;i++){
		if(arr[i]>max){
		max=arr[i];
	}
		if(arr[i]<min){
				min=arr[i];
		}
			
	}
	printf("maximum value =%d\n",max);
	printf("minimum value =%d",min);
}
