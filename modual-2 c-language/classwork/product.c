#include<stdio.h>
struct product {
	char pname[20];
	int  pprice;
	char pdecri[20];
	};
main(){
	struct product s[2];
	int i;
	for(i=0;i<2;i++){
		printf("\n enter the productname price and descripation %d=",i+1);
		scanf("%s %d %s",&s[i].pname,&s[i].pprice,&s[i].pdecri);
	}
	printf("\n productname \t price \t descripation \n\n");
	for(i=0;i<2;i++){
		printf("\n%s",s[i].pname);
		printf("\t%d",s[i].pprice);
		printf("\t%s",s[i].pdecri);
	}
}
