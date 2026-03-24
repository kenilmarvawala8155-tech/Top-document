
#include<stdio.h>
// structe example
union student{
	int enroll;
	char name[20];
	float per;
}
main(){
      union student s1={101,"kenil",70.00};
      printf("\n name of student=%s",s1.name);
            printf("\n enroll=%d",s1.enroll);
                  printf("\n percentage=%f",s1.per);
              }
