#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
 main()
{
    struct student s[3];
    int i;
    // Input student details
    for(i=0; i<3; i++)
    {
        printf("Enter details of student %d\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);
		printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
		 printf("\n");
    }
     for(i=0; i<3; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }
}
