#include<stdio.h>
main(){
   FILE *fp;
   char data[20];
   fp=fopen("test.txt","w");
   if(fp==NULL){
   	printf("\n something is worng");
	   }
   	
   	fprintf(fp,"%s","Hello word");
   	fclose(fp);
	   
	   fp=fopen("test.txt","r");
	   fscanf(fp,"%s",data);
	   printf("\n reading data from file=%s",data);
	   fclose(fp);	
}
