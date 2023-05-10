#include <stdio.h>
struct Student 
{
    int rollno;
    int marks[3];
};

int main() 
{
    struct Student students[5];
    for(int i = 0; i < 5; i++) 
	{
        printf("Enter the details for student %d:\n", i+1);

        printf("Roll number: ");
        scanf("%d", &students[i].rollno);

        for(int j = 0; j < 3; j++) 
		{
            printf("Marks in subject %d: ", j+1);
            scanf("%d", &students[i].marks[j]);
        }
    }
    printf("\nStudent Details:\n");
    for(int i = 0; i < 5; i++) 
	{
        int total_marks = 0;

        printf("Student %d:\n", i+1);

        printf("Roll number: %d\n", students[i].rollno);
        printf("Marks in subjects: ");
        for(int j = 0; j < 3; j++) 
		{
            printf("%d ", students[i].marks[j]);
            total_marks += students[i].marks[j];
        }

        float percentage = (float)total_marks/3.0;
        printf("\nTotal marks: %d\n", total_marks);
        printf("Percentage: %.2f%%\n", percentage);
    }

}
