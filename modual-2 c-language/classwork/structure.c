#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
 main()
{
    struct student s1={"kenil",101,88};
    struct student s2={"raj",102,67};
    struct student s3={"khush",103,78};
    
    {
        printf("Name: %s\n", s1.name);
        printf("Roll Number: %d\n", s1.roll);
        printf("Marks: %.2f\n\n", s1.marks);
        printf("Name: %s\n", s2.name);
        printf("Roll Number: %d\n", s2.roll);
        printf("Marks: %.2f\n\n", s2.marks);
        printf("Name: %s\n", s3.name);
        printf("Roll Number: %d\n", s3.roll);
        printf("Marks: %.2f\n", s3.marks);
    }
}
