#include<stdio.h>
struct sub{
	char name[20];
	int marks;
};

struct student{
	int enroll;
	char name[20];
	float per;
	struct sub sub1;
};
main(){
	struct student s1;
	printf("\n enter the enroll name and per=");
	scanf("%d %s %f",&s1.enroll,s1.name,&s1.per);
	printf("\n enter the sub1 name and marks=");
	scanf("%s %d",s1.sub1.name,&s1.sub1.marks);
	printf("\n name of student=%s",s1.name);
    printf("\n enroll=%d",s1.enroll);
    printf("\n percentage=%.2f",s1.per);
    printf("\n subname =%s",s1.sub1.name);
    printf("\n marks=%d",s1.sub1.marks);
}
