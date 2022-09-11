#include <stdio.h>
typedef struct student
{
    char name[20];
    int score;
} Student;

int main(int argc, char const *argv[])
{

    Student stu1, stu2;
    Student *stu_Pointer;
    printf("size of student %d\n", sizeof(Student));
    printf("size of Student* %d\n", sizeof(Student *));
    printf("size of int %d\n", sizeof(int));
    printf("size of long %d\n", sizeof(long));
    printf("size of long long %d\n", sizeof(long long));
    printf("size of void* %d\n", sizeof(void *));
    printf("size of double %d\n", sizeof(double));
    printf("size of long double %d\n", sizeof(long double));
    printf("size of float %d\n", sizeof(float));

    return 0;
}
