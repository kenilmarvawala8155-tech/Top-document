#include<stdio.h>
// find string without using strrev fuction 
main(){
	char str [20],rev[20];
	int i=0,j=0;
	printf("\n enter str");
	gets(str);
	printf("\n str =%s",str);
	 while(str[i]!='\0')
	 {
	 	i++;
	 }
	 i--;
	 printf("\n len of str=%d",i);
	 while(i>=0)
	 {
	 	//printf("%d=%c",i,str[i]);
	 	rev[j]=str[i];
	 	//printf("%d=%c",j,rev[j]);
	 	i--;
	 	j++;
	 	
	 }
	 rev[j]='\0';
	 printf("\n strrev=%s",rev);
}
