#include <stdio.h>

struct student
{
    int roll_no;
    char name[30];
    int total_marks;
    int marks1, marks2, marks3;
    float average_marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    printf("\nEnter student details:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter student roll no: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter student name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d",
              &s[i].marks1,
              &s[i].marks2,
              &s[i].marks3);

        s[i].total_marks =
            s[i].marks1 +
            s[i].marks2 +
            s[i].marks3;

        s[i].average_marks =
            s[i].total_marks / 3.0;
    }

    printf("\n\nStudent Results:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %d\n", s[i].total_marks);
        printf("Average Marks: %.2f\n", s[i].average_marks);
    }

    return 0;
}
