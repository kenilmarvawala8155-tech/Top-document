#include<stdio.h>

struct student{
	int enroll;
	char name[20];
	float per;
};
main(){
	struct student s1;
	printf("enter the name enroll and per");
	scanf("%s %d %f",&s1.name,&s1.enroll,&s1.per);
	printf("\n name of student=%s",s1.name);
            printf("\n enroll=%d",s1.enroll);
                  printf("\n percentage=%f",s1.per);
}
