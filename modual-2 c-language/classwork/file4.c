#include<stdio.h>
main(){
	FILE *fp;
	char name[20],email[30],ch;
	int enroll,i;
	fp=fopen("student.csv","a");
	for(i=1;i<=2;i++){
		printf("\n enter the student datail no =%d",i);
		printf("\n enter the enroll name email=");
		scanf("%d %s %s",&enroll,&name,&email);
		fprintf(fp,"%d %s %s",enroll,name,email);
		
	}
	fclose(fp);
	
	fp=fopen("student.csv","r");
	printf("\nenroll\tname\temail\n");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==','){
			putchar('\t');
			continue;
		}
		putchar(ch);
	}
	fclose(fp);
	
}
