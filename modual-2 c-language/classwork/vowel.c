#include<stdio.h>
main(){
	int i=0,count=0;
	char str[100];
	printf("enter the string=");
	gets(str);
	while(str[i] !=0){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			count++;
		}
		i++;
	}
	printf("number of vowele =%d ",count);
	
}
