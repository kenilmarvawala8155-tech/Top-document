#include<stdio.h>
main(){
   FILE *fp;
   char data[20],ch;
   fp=fopen("test.txt","w");
   if(fp==NULL){
   	printf("\n something is worng");
	   }
   	
   	fputc('z',fp);
   	fclose(fp);
	   
	   fp=fopen("test.txt","r");
	   ch=fgetc(fp);
	   printf("\n reading char from file=%c",ch);
	   fclose(fp);	
}
